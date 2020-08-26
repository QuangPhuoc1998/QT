import QtQuick 2.3

Item {
    id: circularMeter
    implicitWidth: 300
    implicitHeight: 300

    property int leftValue: 0
    property int leftMinValue: 0
    property int leftMaxValue: 100

    property int rightValue: 0
    property int rightMinValue: 0
    property int rightMaxValue: 100

    property int bottomValue: 0
    property int bottomMinValue: 0
    property int bottomMaxValue: 100

    property int animationSpeed: 800
    property bool restAtValues: false

//    property string fontFamily: "Century Gothic"
//    property bool fontBold: true

    property bool asynchronous: false
    property bool displayLogo: true
    property string logo: "logo.png"

    Item {
        id: fitFrame
        anchors.centerIn: parent
        width: Math.min(parent.width,parent.height)
        height: width

        property real scaleFactor: width / Math.min(parent.implicitWidth,parent.implicitHeight)

        Image {
            id: popeffect
            anchors.leftMargin: -7 * parent.scaleFactor
            anchors.rightMargin: -2 * parent.scaleFactor
            anchors.topMargin: -5 * parent.scaleFactor
            anchors.bottomMargin: -23 * parent.scaleFactor
            anchors.fill: parent
            source: "cmeter_popeffects.png"

            asynchronous: circularMeter.asynchronous

        }


        Image {
            id: cMeterBG
            anchors.fill: parent
            source: "cmeter_bg.png"

            asynchronous: circularMeter.asynchronous

            Item {
                id: axisThrottle
                anchors.centerIn: parent

                rotation: (Math.max(Math.min(circularMeter.leftValue,circularMeter.leftMaxValue),circularMeter.leftMinValue) - circularMeter.leftMinValue)/(circularMeter.leftMaxValue - circularMeter.leftMinValue) * (stopAngle - startAngle) + startAngle

                property int startAngle: -125
                property int stopAngle: -14

                Behavior on rotation {
                    NumberAnimation {
                        duration: circularMeter.animationSpeed
                        easing.type: circularMeter.restAtValues ? Easing.InOutQuad : Easing.Linear
                    }
                }

                Image {
                    id: needleThrottle
                    width: 50 * fitFrame.scaleFactor
                    height: 154 * fitFrame.scaleFactor
                    anchors.bottom: parent.bottom
                    anchors.bottomMargin: 0
                    anchors.horizontalCenter: parent.horizontalCenter
                    source: "comboNeedle.png"

                    asynchronous: circularMeter.asynchronous
                }
            }

            Item {
                id: axisPressure
                anchors.centerIn: parent

                rotation: (Math.max(Math.min(circularMeter.rightValue,circularMeter.rightMaxValue),circularMeter.rightMinValue) - circularMeter.rightMinValue)/(circularMeter.rightMaxValue - circularMeter.rightMinValue) * (stopAngle - startAngle) + startAngle

                property int startAngle: 125
                property int stopAngle: 14

                Behavior on rotation {
                    NumberAnimation {
                        duration: circularMeter.animationSpeed;
                        easing.type: circularMeter.restAtValues ? Easing.InOutQuad : Easing.Linear
                    }
                }


                Image {
                    id: needlePressure
                    width: 50 * fitFrame.scaleFactor
                    height: 154 * fitFrame.scaleFactor
                    source: "comboNeedle.png"
                    anchors.bottomMargin: 0
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.bottom: parent.bottom

                    asynchronous: circularMeter.asynchronous
                }
            }

            Rectangle {
                id: needleFlowRange
                x: 80 * fitFrame.scaleFactor
                y: 170 * fitFrame.scaleFactor
                width: 100 * fitFrame.scaleFactor
                height: 14 * fitFrame.scaleFactor

                color: "#00000000"

                Image {
                    id: needleFlow
                    x: (Math.max(Math.min(circularMeter.bottomValue,circularMeter.bottomMaxValue),circularMeter.bottomMinValue) - circularMeter.bottomMinValue)/(circularMeter.bottomMaxValue - circularMeter.bottomMinValue) * needleFlowRange.width
                    y: (Math.max(Math.min(circularMeter.bottomValue,circularMeter.bottomMaxValue),circularMeter.bottomMinValue) - circularMeter.bottomMinValue)/(circularMeter.bottomMaxValue - circularMeter.bottomMinValue) * needleFlowRange.height
                    width: 40 * fitFrame.scaleFactor
                    height: 60 * fitFrame.scaleFactor
                    source: "slidingNeedle.png"

                    asynchronous: circularMeter.asynchronous

                    Behavior on x {
                        NumberAnimation {
                            duration: circularMeter.animationSpeed;
                            easing.type: circularMeter.restAtValues ? Easing.InOutQuad : Easing.Linear
                        }
                    }
                    Behavior on y {
                        NumberAnimation {
                            duration: circularMeter.animationSpeed;
                            easing.type: circularMeter.restAtValues ? Easing.InOutQuad : Easing.Linear
                        }
                    }



                }
            }

            Image {
                id: centerDisplay
                width: 8/15 * fitFrame.width
                height: 7/15 * fitFrame.height
                anchors.centerIn: parent
                anchors.verticalCenterOffset: -1/30 * fitFrame.height
                source: "cmeter_display.png"

                asynchronous: circularMeter.asynchronous

                Image {
                    id: centerLogo
                    anchors.centerIn: parent
                    anchors.verticalCenterOffset: 1/30 * fitFrame.height
                    source: circularMeter.logo
                    height: 6/150 * fitFrame.height
                    fillMode: Image.PreserveAspectFit
                    //width: 9.365 * height // Aspect ratio from logo.

                    //sourceSize.width: width*2
                    //sourceSize.height: height*2

                    antialiasing: true
                    mipmap: true

                    visible: circularMeter.displayLogo
                    asynchronous: circularMeter.asynchronous
                }

            }

        }

    }

}
