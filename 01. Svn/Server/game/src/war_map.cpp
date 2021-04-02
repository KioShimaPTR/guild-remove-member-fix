//Fixed Bahadýr Bozdað || Cosby || Kioshima

//Search function:

void CWarMap::STeamData::RemoveMember(LPCHARACTER ch)
{
	--iMemberCount;
}

//Change the function:

void CWarMap::STeamData::RemoveMember(LPCHARACTER ch)
{
	set_pidJoiner.erase(ch->GetPlayerID());//RemoveMember fix
	--iMemberCount;
}