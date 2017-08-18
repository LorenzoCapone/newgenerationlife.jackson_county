/*
	File: welcome.sqf
	Author: New-Generation Life
	Link: opendayz.net/threads/dayz-welcome-message-credits-style.13071/
*/

_onScreenTime = 5; //Bestimmt wie lange ein Text dargestellt wird
sleep 8; //Bestimmt wann der Text nach dem Spawnen erscheint

_role1 = "Willkommen auf New-Generation Life";
_role1names = ["Forum: forum.new-generarion.life","Website: www.new-genration.life"]; //Optional auch: ["Blabla","Blabla2"];
_role2 = "Projektleitung";
_role2names = ["Fluffyflarox","Basti","Dirk"];
_role3 = "Server Team";
_role3names = ["Basti","Leonardos","Jonas","Tobi"];

{
sleep 2;
_memberFunction = _x select 0;
_memberNames = _x select 1;
_finalText = format ["<t size='0.40' color='#f2cb0b' align='right'>%1<br /></t>", _memberFunction]; //Ändert die Farbe und Größe der Überschrift
_finalText = _finalText + "<t size='0.70' color='#FFFFFF' align='right'>"; //Ändert die Farbe und Größe des Textes
{_finalText = _finalText + format ["%1<br />", _x]} forEach _memberNames;
_finalText = _finalText + "</t>";
_onScreenTime + (((count _memberNames) - 1) * 0.5);
[
_finalText,
[safezoneX + safezoneW - 0.8,0.50],
[safezoneY + safezoneH - 0.8,0.7],
_onScreenTime,
0.5
] spawn BIS_fnc_dynamicText;
sleep (_onScreenTime);
} forEach [

[_role1, _role1names],
[_role2, _role2names],
[_role3, _role3names]

];