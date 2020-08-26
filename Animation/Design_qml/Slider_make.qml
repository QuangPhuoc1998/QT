import QtQuick 2.0


Rectangle {
    id: slider
    implicitWidth: 60
    implicitHeight: 270
    color: "#00000000"
    border.width: 0

    property int value: maxValue - (sliderKnob.y - maKnob.drag.minimumY)/(maKnob.drag.maximumY - maKnob.drag.minimumY) * (maxValue - minValue) + minValue
    property int minValue: 0
    property int maxValue: 100
    property int initValue: 50

    onInitValueChanged: setValue(initValue)

    property int simulationRate: 500
    property color bgColor: "#333333"
    property color bgEdgeColor: "#000000"
    property color barColor: "#055194"
    property color edgeColor: "#77aaff"
    property color interactiveColor: "#f59321"
    property color interactiveEdgeColor: "#ffccaa"

    function decrease() {
        if (sliderKnob.y + (maKnob.drag.maximumY - maKnob.drag.minimumY)/10 > maKnob.drag.maximumY) {
            sliderKnob.y = maKnob.drag.maximumY
        } else {
            sliderKnob.y += (maKnob.drag.maximumY - maKnob.drag.minimumY)/10
        }
    }

    function increase() {
        if (sliderKnob.y - (maKnob.drag.maximumY - maKnob.drag.minimumY)/10 < maKnob.drag.minimumY) {
            sliderKnob.y = maKnob.drag.minimumY
        } else {
            sliderKnob.y -= (maKnob.drag.maximumY - maKnob.drag.minimumY)/10
        }
    }

    function setValue(v) {
        if (value > maxValue) {
            sliderKnob.y = maKnob.drag.minimumY
        } else if (value < minValue) {
            sliderKnob.y = maKnob.drag.maximumY
        } else {
            sliderKnob.y = maKnob.drag.maximumY - (v - minValue)/(maxValue - minValue) * (maKnob.drag.maximumY - maKnob.drag.minimumY)
        }
    }

    states: [
        State {
            name: "FLAT"
            PropertyChanges { target: popeffect; visible: false }
            PropertyChanges { target: sliderbg; visible: false }
            PropertyChanges { target: slider; border.width: 2; color: slider.bgColor; border.color: slider.bgEdgeColor }
            PropertyChanges { target: sliderfg; source: "" }
            PropertyChanges { target: knobImg; source: "" }
            PropertyChanges { target: flatKnob; visible: true }
            PropertyChanges { target: flatBar; visible: true }
        }
    ]


    BorderImage {
        id: popeffect

        // Downsclaing from double res expanding sourceImage
        x: -10 - parent.width/2
        y: -10 - parent.height/2
        width: parent.width * 2 + 20
        height: parent.height * 2 + 30
        scale: 0.5

        border.left: 10
        border.top: 10
        border.right: 10
        border.bottom: 20

        source: "vmeter_popeffects.png"

    }

    Image {
        id: sliderbg
        clip: true
        anchors.margins: 10
        anchors.fill: parent
        source: "vslider_bg.png"

    }

    Rectangle {
        id: flatBar
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.margins: 0
        border.width: 1
        border.color: slider.edgeColor
        height: sliderbg.height - sliderKnob.y
        color: slider.barColor
        visible: false

    }

    BorderImage {
        id: sliderfg

        // Downscale to halfsize after borderstretching
        x: -parent.width/2
        y: -parent.height/2
        width: parent.width*2
        height: parent.height*2
        scale: 0.5

        border.top: 48
        border.left: 20
        border.right: 20
        border.bottom: 40

        source: "vslider_fg.png"
    }
    Item {
        id: sliderKnob
        y: maKnob.drag.maximumY
        width: Math.round(36/50 * slider.width)
        height: width
        anchors.horizontalCenter: parent.horizontalCenter

        BorderImage {
            id: knobImg
            anchors.centerIn: parent
            width: parent.width * 2
            height: parent.height * 2
            border {
                left: 20
                top: 20
                right: 20
                bottom: 20
            }
            scale: 0.5
            source: "vslider_handle.png"

        }

        MouseArea {
            id: maKnob
            anchors.rightMargin: -10
            anchors.leftMargin: -10
            anchors.bottomMargin: -20
            anchors.topMargin: -20
            anchors.fill: parent

            drag.target: parent
            drag.axis: Drag.YAxis
            drag.minimumY: 10
            drag.maximumY: slider.height - sliderKnob.height - 10
        }

        Rectangle {
            id: flatKnob
            anchors.centerIn: parent
            width: slider.width
            height: width
            border.width: 1
            border.color: slider.interactiveEdgeColor
            visible: false
            color: slider.interactiveColor

            Rectangle {
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.verticalCenter: parent.verticalCenter
                width: 8
                height: 8
                radius: 4
                color: slider.barColor
            }
            Rectangle {
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.horizontalCenterOffset: parent.width/4
                anchors.verticalCenter: parent.verticalCenter
                width: 8
                height: 8
                radius: 4
                color: slider.barColor
            }
            Rectangle {
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.horizontalCenterOffset: -parent.width/4
                anchors.verticalCenter: parent.verticalCenter
                width: 8
                height: 8
                radius: 4
                color: slider.barColor
            }


        }
    }

}
