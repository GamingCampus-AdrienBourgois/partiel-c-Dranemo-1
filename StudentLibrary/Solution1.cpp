#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
	switch (_from)
	{
	case TemperatureUnits::CELSIUS:
		switch (_to)
		{
		case TemperatureUnits::CELSIUS:
			return _value;
			break;
		case TemperatureUnits::FAHRENHEIT:
			return ((9.f / 5.f * _value) + 32.f);
			break;
		case TemperatureUnits::KELVIN:
			return (_value + 273.15);
			break;
		default:
			break;
		}
		break;


	case TemperatureUnits::FAHRENHEIT:
		switch (_to)
		{
		case TemperatureUnits::CELSIUS:
			return (5.f / 9.f * (_value - 32.f));
			break;
		case TemperatureUnits::FAHRENHEIT:
			return _value;
			break;
		case TemperatureUnits::KELVIN:
			return (5.f / 9.f * (_value - 32.f) + 273.15);
			break;
		default:
			break;
		}
		break;


	case TemperatureUnits::KELVIN:
		switch (_to)
		{
		case TemperatureUnits::CELSIUS:
			return (_value - 273.15);
			break;
		case TemperatureUnits::FAHRENHEIT:
			return (9.f / 5.f * (_value - 273.15) + 32.f);
			break;
		case TemperatureUnits::KELVIN:
			return _value;
			break;
		default:
			break;
		}
		break;


	default:
		break;

	}
}

#endif
