//char mat_new[3][5][10][10];
int CTttDlg::InitNewGame()
{
	//�ʱ�
	memcpy(mat_new[0][0]+1,"|111101111|222022222|330333033|444444404|055505550|606666666|770777077|888880888|999909999",90);
	memcpy(mat_new[0][1]+1,"|110111111|220222222|330333333|444444000|555505555|000666666|777770777|888880888|999990999",90);
	memcpy(mat_new[0][2]+1,"|111101111|222020222|333333333|404444404|550505055|606666606|777777777|888080888|999909999",90);
	memcpy(mat_new[0][3]+1,"|111111111|220222022|300333003|444040444|555555555|666060666|700777007|880888088|999999999",90);
	memcpy(mat_new[0][4]+1,"|101111101|022222220|330333033|444444444|555505555|666666666|770777077|088888880|909999909",90);

	//�߱�
	memcpy(mat_new[1][0]+1,"|111111111|202202202|330303033|444444444|500505005|666666666|770707077|808808808|999999999",90);
	memcpy(mat_new[1][1]+1,"|110111011|220222022|003333300|444040444|555505555|666060666|007777700|880888088|990999099",90);
	memcpy(mat_new[1][2]+1,"|111101111|222020222|330303033|404404404|055505550|666606666|777707777|808808808|090909090",90);
	memcpy(mat_new[1][3]+1,"|110111011|202020202|033303330|404444404|550555055|606666606|077707770|808080808|990999099",90);
	memcpy(mat_new[1][4]+1,"|011111011|202222022|330333000|444044444|555505555|666660666|000777077|880888808|990999990",90);

	//���
	memcpy(mat_new[2][0]+1,"|101111101|020222020|303033303|444404044|555050555|660606666|707770707|080888080|909999909",90);
	memcpy(mat_new[2][1]+1,"|101101101|022020220|330333033|404404404|055050550|606606606|770777077|088080880|909909909",90);
	memcpy(mat_new[2][2]+1,"|001111100|002222200|333333333|444000444|555000555|666000666|777777777|008888800|009999900",90);
	memcpy(mat_new[2][3]+1,"|111100111|222020222|330330333|404440444|055550555|000000000|000000000|888880888|999990999",90);
	memcpy(mat_new[2][4]+1,"|001110111|200220022|330033003|444004400|555500555|006660066|700777007|880088800|999099990",90);
		
	return 0;
	
}