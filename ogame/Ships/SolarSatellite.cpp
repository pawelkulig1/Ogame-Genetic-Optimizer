#include "SolarSatellite.h"
#include "common_includes.h"

SolarSatellite::SolarSatellite(Resources default_cost): Ship(default_cost)
{
	name = "Solar Satellite";
	m_requirements.push_back(std::make_pair(globals::Upgradables::SHIPYARD, 1));
}

double SolarSatellite::getProductionPerHour(int planet_temperature) const 
{
	return ((planet_temperature + 160) / 6) * m_count;
}

