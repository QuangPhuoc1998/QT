import QtQuick 2.0
import "."


Item {
    id: area
    implicitWidth: 60
    implicitHeight: 300

    property alias value: slider.value
    property alias minValue: slider.minValue
    property alias maxValue: slider.maxValue
    property alias initValue: slider.initValue

    property alias simulationRate: slider.simulationRate
    property alias bgColor: slider.bgColor
    property alias bgEdgeColor: slider.bgEdgeColor
    property alias barColor: slider.barColor
    property alias edgeColor: slider.edgeColor
    property alias interactiveColor: slider.interactiveColor
    property alias interactiveEdgeColor: slider.interactiveEdgeColor

    Button_make {
        id: upBtn
        anchors.top: parent.top
        width: parent.width
        height: width
        state: parent.state
        smooth: true

        flatRadius: 0
        fontPixelSize: Math.min(width,height)/2
        flatFontColor: parent.barColor
        cornerRadius: 8


        text: "+"
        onClicked: slider.increase()
    }

    Slider_make {
        id: slider
        width: parent.width
        height: parent.height - upBtn.height * 2 - 6
        anchors.centerIn: parent
        state: parent.state
    }

    Button_make {
        id: dwnBtn
        anchors.bottom: parent.bottom
        width: parent.width
        height: width
        state: parent.state
        smooth: true

        flatRadius: 0
        fontPixelSize: Math.min(width,height)/2
        flatFontColor: parent.barColor
        cornerRadius: 8

        text: String.fromCharCode(45) //"-"
        onClicked: slider.decrease()
    }

}
