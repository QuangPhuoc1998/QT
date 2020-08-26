import QtQuick 2.7
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.1
import CustomControls 1.0

Window {
    visible: true
    width: 900
    height: 480
    color: "#242424"
    title: qsTr("Hello World")
    /*---button---*/

    Button_make {
        x: 11
        y: 13
        width: 154
        height: 37
        text: "+"
        onClicked:
        {
            console.debug("btn")
            cir_cell.value += 1
        }
    }
    Button_make {
        x: 188
        y: 13
        width: 154
        height: 37
        text: "-"
        onClicked:
        {
            console.debug("btn")
            cir_cell.value -= 1
        }
    }
    /*---Button Slider---*/
    ButtonSlider
    {
        id: btn_sl
        x: 428
        y: 82
        width: 38
        height: 300
        onValueChanged:
        {
            console.debug(value)
            vermet.value = value
            cir_meter.leftValue = value
        }
    }
    /*---Vertical Meter---*/
    VerticalMeter_make
    {
        id: vermet
        x: 354
        y: 84
        width: 60
        height: 300
    }
    /*---*/
    /*---*/
    CircularMeter_make
    {
        id: cir_meter
        x: 454
        y: 97
        width: 321
        height: 287

    }

    ButtonSlider {
        id: btn_sl1
        x: 767
        y: 90
        width: 38
        height: 300
        onValueChanged:
        {
            cir_meter.rightValue = value
        }
    }
    RadialBar
    {

    }

}
