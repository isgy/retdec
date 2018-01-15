/**
 * @file src/cpdetect/signatures/yara/database/x86/elf/compiler_01.cpp
 * @brief Database of signatures.
 * @copyright (c) 2017 Avast Software, licensed under the MIT license
 */

const char *x86ElfCompiler_01 =
R"x86_elf_compiler(rule rule_1_android_ndk_r8
{
	meta:
		tool = "C"
		name = "GCC"
		version = "4.4.3"
		comment = "Android NDK r8"
		pattern = "5589E553E8E800000081C3????0?0083EC1480BB??0?000000752D8B83??0?0000890424E8??F?FFFF8B83??F?FFFF85C0740E8D83????F?FF890424E8????????C683??0?00000183C4145B5DC366905589E553E89800000081C3????0?0083EC148B83"
	strings:
		$1 = { 55 89 E5 53 E8 E8 00 00 00 81 C3 ?? ?? 0? 00 83 EC 14 80 BB ?? 0? 00 00 00 75 2D 8B 83 ?? 0? 00 00 89 04 24 E8 ?? F? FF FF 8B 83 ?? F? FF FF 85 C0 74 0E 8D 83 ?? ?? F? FF 89 04 24 E8 ?? ?? ?? ?? C6 83 ?? 0? 00 00 01 83 C4 14 5B 5D C3 66 90 55 89 E5 53 E8 98 00 00 00 81 C3 ?? ?? 0? 00 83 EC 14 8B 83 }
	condition:
		for any of them : ( $ at elf.entry_point )
}
rule rule_2_android_ndk_r8
{
	meta:
		tool = "C"
		name = "GCC"
		version = "4.4.3"
		comment = "Android NDK r8"
		pattern = "89E0BA?F8?040852BA?A8?040852BA000000005250E8??F?FFFFE9????0000????0?08????0?08????0?08908D7426005589E583EC18803D??????0800751CB80000000085C0740CC70424????0?08E8?C7?FBF7C605??????0801C9C38D760055B80000"
	strings:
		$1 = { 89 E0 BA ?F 8? 04 08 52 BA ?A 8? 04 08 52 BA 00 00 00 00 52 50 E8 ?? F? FF FF E9 ?? ?? 00 00 ?? ?? 0? 08 ?? ?? 0? 08 ?? ?? 0? 08 90 8D 74 26 00 55 89 E5 83 EC 18 80 3D ?? ?? ?? 08 00 75 1C B8 00 00 00 00 85 C0 74 0C C7 04 24 ?? ?? 0? 08 E8 ?C 7? FB F7 C6 05 ?? ?? ?? 08 01 C9 C3 8D 76 00 55 B8 00 00 }
	condition:
		for any of them : ( $ at elf.entry_point )
}
rule rule_3_Free_Pascal
{
	meta:
		tool = "C"
		name = "Free Pascal"
		version = "2.6.0"
		source = "from Detect It Easy signatures"
		pattern = "5989E38D44????83E4??8915????????A3????????890D????????891D????????E8????????8925????????31EDE8????????C3"
	strings:
		$1 = { 59 89 E3 8D 44 ?? ?? 83 E4 ?? 89 15 ?? ?? ?? ?? A3 ?? ?? ?? ?? 89 0D ?? ?? ?? ?? 89 1D ?? ?? ?? ?? E8 ?? ?? ?? ?? 89 25 ?? ?? ?? ?? 31 ED E8 ?? ?? ?? ?? C3 }
	condition:
		for any of them : ( $ at elf.entry_point )
}
rule rule_4_GCC__bsd
{
	meta:
		tool = "C"
		name = "GCC"
		version = "3.2"
		extra = "BSD"
		pattern = "5557565383EC??8B7424??8B6C24??8B3EC745??????????C74424??????????C74424??????????8B078904248D4424??894424??FF57"
	strings:
		$1 = { 55 57 56 53 83 EC ?? 8B 74 24 ?? 8B 6C 24 ?? 8B 3E C7 45 ?? ?? ?? ?? ?? C7 44 24 ?? ?? ?? ?? ?? C7 44 24 ?? ?? ?? ?? ?? 8B 07 89 04 24 8D 44 24 ?? 89 44 24 ?? FF 57 }
	condition:
		for any of them : ( $ at elf.entry_point )
}
rule rule_5_GCC__bsd
{
	meta:
		tool = "C"
		name = "GCC"
		version = "3.2.1"
		extra = "BSD"
		pattern = "5589E557565383EC??89D18D7D??8B5F??8D74????8935????????85DB7E??837D????74??8B45??A3????????89C28038??74??8DB6????????8DBF????????803A??75??8D42??A3"
	strings:
		$1 = { 55 89 E5 57 56 53 83 EC ?? 89 D1 8D 7D ?? 8B 5F ?? 8D 74 ?? ?? 89 35 ?? ?? ?? ?? 85 DB 7E ?? 83 7D ?? ?? 74 ?? 8B 45 ?? A3 ?? ?? ?? ?? 89 C2 80 38 ?? 74 ?? 8D B6 ?? ?? ?? ?? 8D BF ?? ?? ?? ?? 80 3A ?? 75 ?? 8D 42 ?? A3 }
	condition:
		for any of them : ( $ at elf.entry_point )
}
rule rule_6_GCC__bsd
{
	meta:
		tool = "C"
		name = "GCC"
		version = "3.4.6"
		extra = "BSD"
		pattern = "5589E557565383EC??83E4??8B5D??89D78D74????85DB8935????????7E??8B45??85C074??A3????????89C10FB601"
	strings:
		$1 = { 55 89 E5 57 56 53 83 EC ?? 83 E4 ?? 8B 5D ?? 89 D7 8D 74 ?? ?? 85 DB 89 35 ?? ?? ?? ?? 7E ?? 8B 45 ?? 85 C0 74 ?? A3 ?? ?? ?? ?? 89 C1 0F B6 01 }
	condition:
		for any of them : ( $ at elf.entry_point )
}
rule rule_7_GCC__bsd
{
	meta:
		tool = "C"
		name = "GCC"
		version = "4.2.1"
		extra = "BSD"
		pattern = "5589E5565383EC??83E4??8B5D??89D18D74????85DB8935????????7E??8B45??85C074??A3????????0FB610"
	strings:
		$1 = { 55 89 E5 56 53 83 EC ?? 83 E4 ?? 8B 5D ?? 89 D1 8D 74 ?? ?? 85 DB 89 35 ?? ?? ?? ?? 7E ?? 8B 45 ?? 85 C0 74 ?? A3 ?? ?? ?? ?? 0F B6 10 }
	condition:
		for any of them : ( $ at elf.entry_point )
}
rule rule_8_GCC__i386_portbld_freebsd8_1_gcc
{
	meta:
		tool = "C"
		name = "GCC"
		version = "4.2"
		extra = "FreeBSD 8"
		pattern = "31ED5589E583E4F08D450883EC0450FF750452E808000000CC909090909090905589E557565383EC0C8B750C8B5D1085F68D7CB304893D????0?087E358B0385C0742FA3????0?080FB61084D2742383C001EB0A0FB61083C00184D2741480FA2F75F1A3????0?080FB61083C00184D275ECB8????0?0?85C074348B4508890424E8????????C70424????0?08E8????????E8??F?FFFF897C2408895C2404893424E8??0?0000890424E8????????E8????????EBD090905589E583EC08803D????0?0800740FEB388D760083C004A3????0?08FFD2A1????0?088B1085D275EBB80000000085C0741083EC0C68????0?08E8?97?FBF783C410C605????0?0801C9C3905589E583EC08B80000000085C0741583EC0868????0?0868????0?08E8?B7?FBF783C410A1????0?0885C07416B80000000085C0740D83EC0C68????0?08FFD083C410C9C3909090"
	strings:
		$1 = { 31 ED 55 89 E5 83 E4 F0 8D 45 08 83 EC 04 50 FF 75 04 52 E8 08 00 00 00 CC 90 90 90 90 90 90 90 55 89 E5 57 56 53 83 EC 0C 8B 75 0C 8B 5D 10 85 F6 8D 7C B3 04 89 3D ?? ?? 0? 08 7E 35 8B 03 85 C0 74 2F A3 ?? ?? 0? 08 0F B6 10 84 D2 74 23 83 C0 01 EB 0A 0F B6 10 83 C0 01 84 D2 74 14 80 FA 2F 75 F1 A3 ?? ?? 0? 08 0F B6 10 83 C0 01 84 D2 75 EC B8 ?? ?? 0? 0? 85 C0 74 34 8B 45 08 89 04 24 E8 ?? ?? ?? ?? C7 04 24 ?? ?? 0? 08 E8 ?? ?? ?? ?? E8 ?? F? FF FF 89 7C 24 08 89 5C 24 04 89 34 24 E8 ?? 0? 00 00 89 04 24 E8 ?? ?? ?? ?? E8 ?? ?? ?? ?? EB D0 90 90 55 89 E5 83 EC 08 80 3D ?? ?? 0? 08 00 74 0F EB 38 8D 76 00 83 C0 04 A3 ?? ?? 0? 08 FF D2 A1 ?? ?? 0? 08 8B 10 85 D2 75 EB B8 00 00 00 00 85 C0 74 10 83 EC 0C 68 ?? ?? 0? 08 E8 ?9 7? FB F7 83 C4 10 C6 05 ?? ?? 0? 08 01 C9 C3 90 55 89 E5 83 EC 08 B8 00 00 00 00 85 C0 74 15 83 EC 08 68 ?? ?? 0? 08 68 ?? ?? 0? 08 E8 ?B 7? FB F7 83 C4 10 A1 ?? ?? 0? 08 85 C0 74 16 B8 00 00 00 00 85 C0 74 0D 83 EC 0C 68 ?? ?? 0? 08 FF D0 83 C4 10 C9 C3 90 90 90 }
	condition:
		for any of them : ( $ at elf.entry_point )
}
rule rule_9_GCC__i386_portbld_freebsd8_1_gcc
{
	meta:
		tool = "C"
		name = "GCC"
		version = "4.5"
		extra = "FreeBSD 8"
		pattern = "31ED5589E583E4F08D450883EC0450FF750452E808000000CC909090909090905589E557565383EC0C8B750C8B5D1085F68D7CB304893D????0?087E358B0385C0742FA3????0?080FB61084D2742383C001EB0A0FB61083C00184D2741480FA2F75F1A3????0?080FB61083C00184D275ECB8????0?0?85C074348B4508890424E8????????C70424?8??0?08E8????????E8??F?FFFF897C2408895C2404893424E8??0?0000890424E8????????E8????????EBD0909090909090909090905589E55383EC04803D????0?0800753FA1????0?08BB????0?0881EB????0?08C1FB0283EB0139D8731E8DB60000000083C001A3????0?08FF1485????0?08A1????0?0839D872E8C605????0?080183C4045B5DC38D7426008DBC27000000005589E583EC18A1????0?0885C07412B80000000085C07409C70424????0?08FFD0C9C390"
	strings:
		$1 = { 31 ED 55 89 E5 83 E4 F0 8D 45 08 83 EC 04 50 FF 75 04 52 E8 08 00 00 00 CC 90 90 90 90 90 90 90 55 89 E5 57 56 53 83 EC 0C 8B 75 0C 8B 5D 10 85 F6 8D 7C B3 04 89 3D ?? ?? 0? 08 7E 35 8B 03 85 C0 74 2F A3 ?? ?? 0? 08 0F B6 10 84 D2 74 23 83 C0 01 EB 0A 0F B6 10 83 C0 01 84 D2 74 14 80 FA 2F 75 F1 A3 ?? ?? 0? 08 0F B6 10 83 C0 01 84 D2 75 EC B8 ?? ?? 0? 0? 85 C0 74 34 8B 45 08 89 04 24 E8 ?? ?? ?? ?? C7 04 24 ?8 ?? 0? 08 E8 ?? ?? ?? ?? E8 ?? F? FF FF 89 7C 24 08 89 5C 24 04 89 34 24 E8 ?? 0? 00 00 89 04 24 E8 ?? ?? ?? ?? E8 ?? ?? ?? ?? EB D0 90 90 90 90 90 90 90 90 90 90 55 89 E5 53 83 EC 04 80 3D ?? ?? 0? 08 00 75 3F A1 ?? ?? 0? 08 BB ?? ?? 0? 08 81 EB ?? ?? 0? 08 C1 FB 02 83 EB 01 39 D8 73 1E 8D B6 00 00 00 00 83 C0 01 A3 ?? ?? 0? 08 FF 14 85 ?? ?? 0? 08 A1 ?? ?? 0? 08 39 D8 72 E8 C6 05 ?? ?? 0? 08 01 83 C4 04 5B 5D C3 8D 74 26 00 8D BC 27 00 00 00 00 55 89 E5 83 EC 18 A1 ?? ?? 0? 08 85 C0 74 12 B8 00 00 00 00 85 C0 74 09 C7 04 24 ?? ?? 0? 08 FF D0 C9 C3 90 }
	condition:
		for any of them : ( $ at elf.entry_point )
}
rule rule_10_GCC__i386_portbld_freebsd8_2_gcc
{
	meta:
		tool = "C"
		name = "GCC"
		version = "4.7.0 20110827 experimental"
		extra = "FreeBSD Ports Collection"
		pattern = "31ED5589E583E4F08D450883EC0450FF750452E808000000CC909090909090905589E557565383EC0C8B750C8B5D1085F68D7CB304893D????0?087E358B0385C0742FA3????0?080FB61084D2742383C001EB0A0FB61083C00184D2741480FA2F75F1A3????0?080FB61083C00184D275ECB8????0?0?85C074348B4508890424E8????????C70424?8??0?08E8????????E8??F?FFFF897C2408895C2404893424E8????????890424E8????????E8????????EBD0909090909090909090905589E55383EC04803D????0?0800753FA1????0?08BB????0?0881EB????0?08C1FB0283EB0139D8731E8DB60000000083C001A3????0?08FF1485????0?08A1????0?0839D872E8C605????0?080183C4045B5DC38D7426008DBC27000000005589E583EC18A1????0?0885C07412B80000000085C07409C70424????0?08FFD0C9C390"
	strings:
		$1 = { 31 ED 55 89 E5 83 E4 F0 8D 45 08 83 EC 04 50 FF 75 04 52 E8 08 00 00 00 CC 90 90 90 90 90 90 90 55 89 E5 57 56 53 83 EC 0C 8B 75 0C 8B 5D 10 85 F6 8D 7C B3 04 89 3D ?? ?? 0? 08 7E 35 8B 03 85 C0 74 2F A3 ?? ?? 0? 08 0F B6 10 84 D2 74 23 83 C0 01 EB 0A 0F B6 10 83 C0 01 84 D2 74 14 80 FA 2F 75 F1 A3 ?? ?? 0? 08 0F B6 10 83 C0 01 84 D2 75 EC B8 ?? ?? 0? 0? 85 C0 74 34 8B 45 08 89 04 24 E8 ?? ?? ?? ?? C7 04 24 ?8 ?? 0? 08 E8 ?? ?? ?? ?? E8 ?? F? FF FF 89 7C 24 08 89 5C 24 04 89 34 24 E8 ?? ?? ?? ?? 89 04 24 E8 ?? ?? ?? ?? E8 ?? ?? ?? ?? EB D0 90 90 90 90 90 90 90 90 90 90 55 89 E5 53 83 EC 04 80 3D ?? ?? 0? 08 00 75 3F A1 ?? ?? 0? 08 BB ?? ?? 0? 08 81 EB ?? ?? 0? 08 C1 FB 02 83 EB 01 39 D8 73 1E 8D B6 00 00 00 00 83 C0 01 A3 ?? ?? 0? 08 FF 14 85 ?? ?? 0? 08 A1 ?? ?? 0? 08 39 D8 72 E8 C6 05 ?? ?? 0? 08 01 83 C4 04 5B 5D C3 8D 74 26 00 8D BC 27 00 00 00 00 55 89 E5 83 EC 18 A1 ?? ?? 0? 08 85 C0 74 12 B8 00 00 00 00 85 C0 74 09 C7 04 24 ?? ?? 0? 08 FF D0 C9 C3 90 }
	condition:
		for any of them : ( $ at elf.entry_point )
}
rule rule_11_GCC__i686_linux_gcc
{
	meta:
		tool = "C"
		name = "GCC"
		version = "3.3"
		comment = "CentOS 5.4"
		pattern = "31ED5E89E183E4F050545268?0??040868?0??0408515668??8?0408E8????????F490905589E55383EC04E8000000005B81C3????0?008B93FCFFFFFF85D27405E8????F?F?585BC9C39090909090905589E583EC08803D????0?080075??A1????0?088B1085D2741B8DB60000000083C004A3????0?08FFD2A1????0?088B1085D275EB"
	strings:
		$1 = { 31 ED 5E 89 E1 83 E4 F0 50 54 52 68 ?0 ?? 04 08 68 ?0 ?? 04 08 51 56 68 ?? 8? 04 08 E8 ?? ?? ?? ?? F4 90 90 55 89 E5 53 83 EC 04 E8 00 00 00 00 5B 81 C3 ?? ?? 0? 00 8B 93 FC FF FF FF 85 D2 74 05 E8 ?? ?? F? F? 58 5B C9 C3 90 90 90 90 90 90 55 89 E5 83 EC 08 80 3D ?? ?? 0? 08 00 75 ?? A1 ?? ?? 0? 08 8B 10 85 D2 74 1B 8D B6 00 00 00 00 83 C0 04 A3 ?? ?? 0? 08 FF D2 A1 ?? ?? 0? 08 8B 10 85 D2 75 EB }
	condition:
		for any of them : ( $ at elf.entry_point )
}
rule rule_12_GCC__i686_linux_gcc
{
	meta:
		tool = "C"
		name = "GCC"
		version = "3.4"
		pattern = "31ED5E89E183E4F050545268?0??040868?0??0408515668??8?0408E8????????F490905589E55383EC04E8000000005B81C3????0?008B93FCFFFFFF85D27405E8????F?F?585BC9C39090909090905589E583EC08803D????0?0800740CEB??83C004A3????0?08FFD2A1????0?088B1085D275EB"
	strings:
		$1 = { 31 ED 5E 89 E1 83 E4 F0 50 54 52 68 ?0 ?? 04 08 68 ?0 ?? 04 08 51 56 68 ?? 8? 04 08 E8 ?? ?? ?? ?? F4 90 90 55 89 E5 53 83 EC 04 E8 00 00 00 00 5B 81 C3 ?? ?? 0? 00 8B 93 FC FF FF FF 85 D2 74 05 E8 ?? ?? F? F? 58 5B C9 C3 90 90 90 90 90 90 55 89 E5 83 EC 08 80 3D ?? ?? 0? 08 00 74 0C EB ?? 83 C0 04 A3 ?? ?? 0? 08 FF D2 A1 ?? ?? 0? 08 8B 10 85 D2 75 EB }
	condition:
		for any of them : ( $ at elf.entry_point )
}
rule rule_13_GCC__i686_linux_gcc
{
	meta:
		tool = "C"
		name = "GCC"
		version = "4.0 - 4.2"
		pattern = "31ED5E89E183E4F050545268?0??040868?0??0408515668??8?0408E8????????F490905589E55383EC04E8000000005B81C3????0?008B93FCFFFFFF85D27405E8????F?F?585BC9C390905589E583EC08803D????0?0800740CEB??83C004A3????0?08FFD2A1????0?088B1085D275EB"
	strings:
		$1 = { 31 ED 5E 89 E1 83 E4 F0 50 54 52 68 ?0 ?? 04 08 68 ?0 ?? 04 08 51 56 68 ?? 8? 04 08 E8 ?? ?? ?? ?? F4 90 90 55 89 E5 53 83 EC 04 E8 00 00 00 00 5B 81 C3 ?? ?? 0? 00 8B 93 FC FF FF FF 85 D2 74 05 E8 ?? ?? F? F? 58 5B C9 C3 90 90 55 89 E5 83 EC 08 80 3D ?? ?? 0? 08 00 74 0C EB ?? 83 C0 04 A3 ?? ?? 0? 08 FF D2 A1 ?? ?? 0? 08 8B 10 85 D2 75 EB }
	condition:
		for any of them : ( $ at elf.entry_point )
}
rule rule_14_GCC__i686_linux_gcc
{
	meta:
		tool = "C"
		name = "GCC"
		version = "4.3"
		pattern = "31ED5E89E183E4F050545268?0??040868?0??0408515668??8?0408E8????????F490905589E55383EC04E8000000005B81C3????0?008B93FCFFFFFF85D27405E8????F?F?585BC9C39090909090905589E55383EC04803D????0?080075??8B15????0?08B8????0?082D????0?08C1F8028D58FF39DA731F8DB6000000008D4201A3????0?08FF1485????0?088B15????0?0839DA72E7"
	strings:
		$1 = { 31 ED 5E 89 E1 83 E4 F0 50 54 52 68 ?0 ?? 04 08 68 ?0 ?? 04 08 51 56 68 ?? 8? 04 08 E8 ?? ?? ?? ?? F4 90 90 55 89 E5 53 83 EC 04 E8 00 00 00 00 5B 81 C3 ?? ?? 0? 00 8B 93 FC FF FF FF 85 D2 74 05 E8 ?? ?? F? F? 58 5B C9 C3 90 90 90 90 90 90 55 89 E5 53 83 EC 04 80 3D ?? ?? 0? 08 00 75 ?? 8B 15 ?? ?? 0? 08 B8 ?? ?? 0? 08 2D ?? ?? 0? 08 C1 F8 02 8D 58 FF 39 DA 73 1F 8D B6 00 00 00 00 8D 42 01 A3 ?? ?? 0? 08 FF 14 85 ?? ?? 0? 08 8B 15 ?? ?? 0? 08 39 DA 72 E7 }
	condition:
		for any of them : ( $ at elf.entry_point )
}
rule rule_15_GCC__i686_linux_gcc
{
	meta:
		tool = "C"
		name = "GCC"
		version = "4.4 - 4.5"
		pattern = "31ED5E89E183E4F050545268?0??040868?0??0408515668??8?0408E8????????F490905589E55383EC04E8000000005B81C3????0?008B93FCFFFFFF85D27405E8????F?F?585BC9C39090909090905589E55383EC?4803D????0?080075??A1????0?08BB????0?0881EB????0?08C1FB024B39D8731E908DB4260000000040A3????0?08FF1485????0?08A1????0?0839D872EA"
	strings:
		$1 = { 31 ED 5E 89 E1 83 E4 F0 50 54 52 68 ?0 ?? 04 08 68 ?0 ?? 04 08 51 56 68 ?? 8? 04 08 E8 ?? ?? ?? ?? F4 90 90 55 89 E5 53 83 EC 04 E8 00 00 00 00 5B 81 C3 ?? ?? 0? 00 8B 93 FC FF FF FF 85 D2 74 05 E8 ?? ?? F? F? 58 5B C9 C3 90 90 90 90 90 90 55 89 E5 53 83 EC ?4 80 3D ?? ?? 0? 08 00 75 ?? A1 ?? ?? 0? 08 BB ?? ?? 0? 08 81 EB ?? ?? 0? 08 C1 FB 02 4B 39 D8 73 1E 90 8D B4 26 00 00 00 00 40 A3 ?? ?? 0? 08 FF 14 85 ?? ?? 0? 08 A1 ?? ?? 0? 08 39 D8 72 EA }
	condition:
		for any of them : ( $ at elf.entry_point )
})x86_elf_compiler";