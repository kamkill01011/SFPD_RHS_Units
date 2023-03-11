//#include "script_component.hpp"
/*
 * Author: commy2
 * Adjust the grenades throwing direction and speed to the selected throwing mode. Called from the unified fired EH only for CAManBase
 *
 * Arguments:
 * None. Parameters inherited from EFUNC(common,firedEH)
 *
 * Return Value:
 * None
 *
 * Example:
 * [clientFiredBIS-XEH] call ace_grenades_fnc_throwGrenade
 *
 * Public: No
 */

if (_weapon != "Throw") exitWith {};

if (isNull _projectile) then {
    _projectile = nearestObject [_unit, _ammo];
};

private _config = configFile >> "CfgAmmo" >> _ammo;

if (getNumber (_config >> "CBRN_isGrenade") == 1) then {
    private _fuzeTime = getNumber (_config >> "explosionTime");
    private _timeToLive = getNumber (_config >> "timeToLive");
    private _chemicalType = getNumber (_config >> "CBRN_chemicalType");
    private _heightOfBurst = getNumber (_config >> "CBRN_heightOfBurst");
    private _sprayWidth = getNumber (_config >> "CBRN_sprayWidth");
    private _lifetime = getNumber (_config >> "CBRN_lifetime");

    [CBRN_fnc_gasGrenade, [_projectile, _timeToLive, _chemicalType, _heightOfBurst, _sprayWidth, _lifetime], _fuzeTime] call CBA_fnc_waitAndExecute;
};
