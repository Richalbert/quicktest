import QtQuick 2.0
import QtQuick.Window 2.0

Window
{
    visible: true
    width: 300
    height: 240
    title: "Mon test de Quick"


    Rectangle {
        x: 0; y: 0
        width: parent.width; height: parent.height /2
        color: "yellow"
        
        Text {
            id: msg
            anchors.centerIn: parent
            horizontalAlignment: Text.AlignHCenter
            text: "<b>Mon texte a moi</b>"
        }
        
        MouseArea {
            anchors.fill: parent
            onClicked: function() {
                //temp.plusUn()
                qmlTemp.temp = 30
                qmlTemp.refresh()
                var t = "<b>Température</b><br>%1°"
                console.log(t.arg(qmlTemp.temp))
            }
        }
    }
    
    Rectangle {
        x: 0; y: parent.height /2
        width: parent.width; height: parent.height /2
        color: "grey"
        
        Image {
            sourceSize.width: Math.min(parent.width,parent.height)
            sourceSize.height: Math.min(parent.width,parent.height)
            anchors.centerIn: parent
            source: "images/Snowflake.svg"
        }

    }
	function update() {
		var t = "<b>Température</b><br>%1°"
		msg.text = t.arg(qmlTemp.temp)
	}
	Timer {
		id: globalTimer
		interval: 1000
		repeat: true
		running: true
		triggeredOnStart: true
		onTriggered: update()
	}
}
