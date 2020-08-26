import QtQuick 2.0
import QtQuick.Particles 2.0
import QtQml 2.0
import QtGraphicalEffects 1.0

Rectangle {
    id: verticalMeter
    implicitWidth: 60
    implicitHeight: 270
    color: "#00000000"
    border.width: 0

    property color bgColor: "#333333"
    property color bgEdgeColor: "#00000000"
    property color barColor: "#055194"
    property color edgeColor: "#77aaff"

    property bool asynchronous: false

    property int value: 0
    property int minValue: 0
    property int maxValue: 100
    property int warningLevel: 80
    property int criticalLevel: 90

    property bool smoothValueChanges: true
    property int smoothDuration: 100

    states: [
        State {
            name: "FLAT"
            PropertyChanges { target: verticalMeter; border.width: 2; height: 2*flatCircularMeter.height/3; color: bgColor; border.color: bgEdgeColor }
            PropertyChanges { target: popeffect; visible: false}
            PropertyChanges { target: vmeterbg; source: "" } //visible: false}
            PropertyChanges { target: vmeterfg; source: "" }
            PropertyChanges { target: vmeterbar; source: "" }
            PropertyChanges { target: flatBar; visible: true }
            PropertyChanges { target: waterBubbles; visible: false }
        }
    ]

//    onValueChanged: {
//        vmeterbar.y = (Math.max(Math.min(value,maxValue),minValue) - minValue)/(maxValue - minValue) * (vmeterbar.stopY - vmeterbar.startY) + vmeterbar.startY

//    }

    //Flat mode water
    Rectangle {
        id: flatVerticalMeter
        anchors.fill: parent
        color: "#00000000"
        border.width: 0

        Rectangle {
            id: flatBar
            anchors.bottom: parent.bottom
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.margins: 1
            height: parent.height - vmeterbar.y
            color: barColor
            border.width: 1
            border.color: edgeColor
            visible: false

        }
    }


    BorderImage {
        id: popeffect
        x: -parent.width/2 - 10
        y: -parent.height/2 - 10
        width: parent.width*2 + 20 //140px
        height: parent.height*2 + 30 //570px
        scale: 0.5

        asynchronous: verticalMeter.asynchronous

        border {
            top: 10
            bottom: 20
            left: 10
            right: 10
        }

        source: "vmeter_popeffects.png"
    }

    Image {
        id: vmeterbg
        clip: true
        anchors.margins: 5
        anchors.fill: parent
        source: "vmeter_bg.png"

        asynchronous: verticalMeter.asynchronous

        Image {
            id: vmeterbar
            x: 6
            y: (Math.max(Math.min(verticalMeter.value,verticalMeter.maxValue),verticalMeter.minValue) - verticalMeter.minValue)/(verticalMeter.maxValue - verticalMeter.minValue) * (stopY - startY) + startY
            width: verticalMeter.width -12
            height: verticalMeter.height
            anchors.horizontalCenter: parent.horizontalCenter
            source: "water_bar.png"

            asynchronous: verticalMeter.asynchronous

            opacity: 1
            visible: opacity > 0.1

            property int startY: verticalMeter.height - 30
            property int stopY: 6




            Behavior on y { NumberAnimation { duration: verticalMeter.smoothValueChanges ? verticalMeter.smoothDuration : 0; easing.type: Easing.InOutQuad} }

            ParticleSystem {
                id: waterBubbles
                anchors.fill: parent
                anchors.topMargin: 6 * verticalMeter.height / verticalMeter.implicitHeight
                anchors.leftMargin: 4
                anchors.rightMargin: 3
                running: true

                ImageParticle {
                    anchors.fill: parent
                    clip: true

                    alpha: 0.4
                    alphaVariation: 0.3
                    autoRotation: true
                    entryEffect: ImageParticle.Fade
                    source: "bubble.png"
                }

                Emitter {
                    id: bubbleEmitter
                    width: parent.width/2
                    height: 10
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.bottom: parent.bottom
                    anchors.bottomMargin: vmeterbar.y
                    enabled: true

                    emitRate: 5
                    lifeSpan: 4000
                    lifeSpanVariation: 2000
                    size: 6
                    sizeVariation: 5
                    velocity: AngleDirection {
                        angle: -90
                        angleVariation: 2
                        magnitude: 50
                        magnitudeVariation: 20
                    }
                }

                Turbulence {
                    system: waterBubbles
                    anchors.fill: parent
                    strength: 4
                    scale: 0.2
                }

                Attractor {
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.top: parent.top
                    affectedParameter: Attractor.Velocity
                    strength: 4.0
                    proportionalToDistance: Attractor.Constant
                }


            }


        }

    }



    BorderImage {
        id: vmeterfg
        x: -width * (1 - scale) / 2
        y: -height * (1 - scale) / 2
        width: parent.width / scale
        height: parent.height / scale
        scale: 2/5

        asynchronous: verticalMeter.asynchronous

        border {
            top: 20
            bottom: 20
            left: 20
            right: 20
        }

        source: "vmeter_fg.png"
    }
}
