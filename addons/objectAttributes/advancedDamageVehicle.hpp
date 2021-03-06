class AdvancedDamageVehicle
{
	displayName = "Advanced Damage";
	collapsed = 1;
	class Attributes
	{
		class Engine
		{
			displayName = "Engine (all)";
			tooltip = "Damages a specific vehicle part.";
			property = "3E_damageEngine";
			control = "slider";
			expression = "_this setHitPointDamage ['hitEngine',_value];";
			defaultValue = "0";
			validate = "number"; 
			condition = "objectVehicle";
			typeName = "NUMBER"; 
		};
		class Gun: Engine
		{
			displayName = "Gun (all)";
			property = "3E_damageGun";
			expression = "_this setHitPointDamage ['hitGun',_value];";
		};
		class FuelTank: Engine
		{
			displayName = "Fuel tank (all)";
			property = "3E_damageFuelTank";
			expression = "_this setHitPointDamage ['hitFuel',_value];";
		};
		class Turret: Engine
		{
			displayName = "Turret (all)";
			property = "3E_damageTurret";
			expression = "_this setHitPointDamage ['hitTurret',_value];";
		};	
		class Windows: Engine
		{
			displayName = "Window (all)";
			property = "3E_damageWindows";
			expression = "{_this setHitPointDamage[_x,_value]} forEach ['HitGlass1','HitGlass2','HitGlass3','HitGlass4','HitRGlass','HitLGlass','HitGlass5','HitGlass6']";
		};	
		class LFWheel: Engine
		{
			displayName = "1st axle left wheel (cars)";
			property = "3E_damageLFWheel";
			expression = "_this setHitPointDamage ['hitLFWheel',_value];";
		};		
		class RFWheel: Engine
		{
			displayName = "1st axle right wheel (cars)";
			property = "3E_damageRFWheel";
			expression = "_this setHitPointDamage ['hitRFWheel',_value];";
		};
		class LF2Wheel: Engine 
		{
			displayName = "2nd axle left wheel (cars)";
			property = "3E_damageLF2Wheel";
			expression = "_this setHitPointDamage ['HitLF2Wheel',_value]";
		};
		class RF2Wheel: Engine 
		{
			displayName = "2nd axle right wheel (cars)";
			property = "3E_damageRF2Wheel";
			expression = "_this setHitPointDamage ['HitRF2Wheel',_value]";
		};
		class LMWheel: Engine 
		{
			displayName = "3rd axle left wheel (cars)";
			property = "3E_damageLMWheel";
			expression = "_this setHitPointDamage ['HitLMWheel',_value]";
		};
		class RMWheel: Engine 
		{
			displayName = "3rd axle right wheel (cars)";
			property = "3E_damageRMWheel";
			expression = "_this setHitPointDamage ['HitRMWheel',_value]";
		};
		class LBWheel: Engine
		{
			displayName = "4th axle left wheel (cars)";
			property = "3E_damageLBWheel";
			expression = "_this setHitPointDamage ['HitLBWheel',_value];";
		};
		class RBWheel: Engine 
		{
			displayName = "4th axle right wheel (cars)";
			property = "3E_damageRBWheel";
			expression = "_this setHitPointDamage ['HitRBWheel',_value];";
		};
		class vehBody: Engine
		{
			displayName = "Body (cars)";
			property = "3E_damageVehBody";
			expression = "_this setHitPointDamage ['hitBody',_value];";
		};
		class LTrack: Engine
		{
			displayName = "Left track (tanks)";
			property = "3E_damageLTrack";
			expression = "_this setHitPointDamage ['hitLTrack',_value];";
		};
		class RTrack: Engine
		{
			displayName = "Right track (tanks)";
			property = "3E_damageRTrack";
			expression = "_this setHitPointDamage ['hitRTrack',_value];";
		};
		class Hull: Engine
		{
			displayName = "Hull (tanks & helicopters)";
			property = "3E_damageHull";
			expression = "_this setHitPointDamage ['hitHull',_value];";
		};
		class Avionics: Engine
		{
			displayName = "Damage avionics (helicopter)";
			property = "3E_damageAvionics";
			expression = "_this setHitPointDamage ['hitAvionics',_value];";
		};	
		class MainRotor: Engine
		{
			displayName = "Main rotor (helicopter)";
			property = "3E_damageMainRotor";
			expression = "_this setHitPointDamage ['hitRRotor',_value];";
		};	
		class TailRotor: Engine
		{
			displayName = "Trail rotor (helicopter)";
			property = "3E_damageTailRotor";
			expression = "_this setHitPointDamage ['hitVRotor',_value];";
		};	
	};
};