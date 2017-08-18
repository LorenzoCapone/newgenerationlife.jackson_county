if(isServer)exitWith{};
private["_ziel", "_rang", "_marke", "_org", "_message"];
if(vehicle player != player )exitWith{};
_ziel = cursorTarget;
if(isNull _ziel) then {_ziel = player;};    
if(!(_ziel isKindOf "Man")) then {_ziel = player;};  
if(!(alive _ziel)) then {_ziel = player;};     
switch(playerSide)do{
 case west:{
  switch (call life_coplevel) do{
   case 1: { _rang = "Recruit"; };
   case 2: { _rang = "Officer"; };
   case 3: { _rang = "Sergeant"; };
   case 4: { _rang = "Master Sergeant"; };
   case 5: { _rang = "Sergeant Major"; };
   case 6: { _rang = "Lieutenant"; };
   case 7: { _rang = "Captain"; };
   case 8: { _rang = "Major"; };
   case 9: { _rang = "Commander"; };
   case 10: { _rang = "Deputy Chief"; };
   case 11: { _rang = "Ass. Chief"; };
   case 12: { _rang = "Chief of Police"; };
   case 13: { _rang = "Commissioner of the Police"; };
   default { _rank =  "Error";};
  };
  _marke = "marke_cop";
  _org = "Police Metrocity";
 };
 case east:{
  switch (call life_adaclevel) do{
   case 1: { _rang = "ADAC Praktikant"; };
   case 2: { _rang = "ADAC Azubi"; };
   case 3: { _rang = "ADAC Geselle"; };
   case 4: { _rang = "ADAC Techniker"; };
   case 5: { _rang = "ADAC Meister"; };
   case 6: { _rang = "ADAC Co.Chef"; };
   case 7: { _rang = "ADAC Chef"; };
   case 8: { _rang = "Leitung"; };
  };
  _marke = "marke_ziv";
  _org = "ADAC Altis";
 };
 case independent:{
  switch (call life_mediclevel) do{
   case 1: { _rang = "Ersthelfer"; };
   case 2: { _rang = "Rettungshelfer"; };
   case 3: { _rang = "Rettungsanitäter"; };
   case 4: { _rang = "Notfallsanitäter"; };
   case 5: { _rang = "Notarzt"; };   
   case 6: { _rang = "Lehrrettungsassistent"; };  
   case 7: { _rang = "ÄrztlicherLeiter"; };   
   default { _rank =  "Error";};
  };
  _marke = "marke_ziv";
  _org = "EMS Metrocity";
 };
 case civilian:{
  if(playerSide == civilian)then{
   _rang = "Zivilist";
   _marke = "marke_ziv";
   _org = "Republik Jackson County";
  }else{
   _rang = "Zivilist";
   _marke = "marke_abi";
   _org = "Republik Jackson County";
  };  
 };
};
_message = format["<img size='10' color='#FFFFFF' image='icons\%1.paa'/><br/><br/><t size='2.5'>%2</t><br/><t size='1.8'>%3</t><br/><t size='1'>%4</t>",_marke, name player, _rang, _org];
[[player, _message],"life_fnc_Lizenzsehen",_ziel,false] spawn life_fnc_MP;