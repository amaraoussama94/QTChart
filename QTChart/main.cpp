#include "mainwindow.h"

#include <QApplication>

#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>

QT_CHARTS_USE_NAMESPACE

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
/*   //P1.
    QBarSet *set0 = new QBarSet("Altuve");
    QBarSet *set1 = new QBarSet("Martinez");
    QBarSet *set2 = new QBarSet("Segura");
    QBarSet *set3 = new QBarSet("Simmons");
    QBarSet *set4 = new QBarSet("Trout");

    *set0 << 283 << 341 << 313 << 338 << 346 << 335;
    *set1 << 250 << 315 << 282 << 307 << 303 << 330;
    *set2 << 294 << 246 << 257 << 319 << 300 << 325;
    *set3 << 248 << 244 << 265 << 281 << 278 << 313;
    *set4 << 323 << 287 << 299 << 315 << 306 << 313;
                //Bar Chart
    //QBarSeries *series = new QBarSeries();
                //Stacked bar chart
    QHorizontalStackedBarSeries *series = new QHorizontalStackedBarSeries();
    series->append(set0);
    series->append(set1);
    series->append(set2);
    series->append(set3);
    series->append(set4);


    QChart *chart = new QChart();
    chart->addSeries(series);


    chart->setTitle("Batting Avg by Year");

    chart->setAnimationOptions(QChart::AllAnimations);

    QStringList categories;
    categories << "2013" << "2014" << "2015" << "2016" << "2017" << "2018";
    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categories);
    chart->createDefaultAxes();
    //chart->setAxisX(axis, series);
     chart->setAxisY(axis, series);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);


    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QPalette pal = qApp->palette();
    pal.setColor(QPalette::Window, QRgb(0xffffff));
    pal.setColor(QPalette::WindowText, QRgb(0x404044));

    qApp->setPalette(pal);
*/
/*
   // 2. Line chart example


   QLineSeries *series = new QLineSeries();
   series->append(0, 16);
   series->append(1, 25);
   series->append(2, 24);
   series->append(3, 19);
   series->append(4, 33);
   series->append(5, 25);
   series->append(6, 34);


   QChart *chart = new QChart();
   chart->legend()->hide();
   chart->addSeries(series);
   chart->createDefaultAxes();


    QFont font;
    font.setPixelSize(18);
    chart->setTitleFont(font);
    chart->setTitleBrush(QBrush(Qt::black));
    chart->setTitle("Barry Bonds HRs as Pirate");


    QPen pen(QRgb(0x000000));
    pen.setWidth(5);
    series->setPen(pen);

   chart->setAnimationOptions(QChart::AllAnimations);

   QCategoryAxis *axisX = new QCategoryAxis();
   axisX->append("1986",0);
   axisX->append("1987",1);
   axisX->append("1988",2);
   axisX->append("1989",3);
   axisX->append("1990",4);
   axisX->append("1991",5);
   axisX->append("1992",6);
   chart->setAxisX(axisX, series);

   QChartView *chartView = new QChartView(chart);
   chartView->setRenderHint(QPainter::Antialiasing);
*/

        // 3. Pie Chart Example

    QPieSeries *series = new QPieSeries();
    series->append("Vegetables",.40);
    series->append("Beans",.20);
    series->append("Fruits",.15);
    series->append("Seeds/Nuts",.10);
    series->append("Whole Grains",.15);
    QPieSlice *slice0 = series->slices().at(0);
    slice0->setLabelVisible();

    QPieSlice *slice1 = series->slices().at(1);
    slice1->setExploded();
    slice1->setLabelVisible();
   slice1->setPen(QPen(Qt::darkGreen, 2));
   slice1->setBrush(Qt::green);

   QPieSlice *slice2 = series->slices().at(2);
   slice2->setLabelVisible();
   QPieSlice *slice3 = series->slices().at(3);
   slice3->setLabelVisible();
   QPieSlice *slice4 = series->slices().at(4);
   slice4->setLabelVisible();


   QChart *chart = new QChart();
   chart->addSeries(series);
   chart->setTitle("What Derek Ate this Week");
   chart->legend()->hide();

   QChartView *chartView = new QChartView(chart);
   chartView->setRenderHint(QPainter::Antialiasing);

   QMainWindow window;
   window.setCentralWidget(chartView);
   window.resize(420, 300);
   window.show();
   return a.exec();
}
