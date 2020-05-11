
-----------------------------------
-- WORKSPACE CONFIGURATIONS
-----------------------------------


workspace "ReachOut"
	architecture "x64"
	
	configurations
	{
		"Debug", "Release", "Dist"
	}
	
outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"
	
	
	
	
	
	
	
project "logger"
	location "logger"
	kind "SharedLib"
	language "C++"
	
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	
	files
	{
		"logger/include/logger/**.h",
		"logger/src/**.cpp"
	}
	
	includedirs
	{
		"logger/include"	
	}
		
	defines
	{
		"LOGGER"
	}
	
	postbuildcommands
	{
		("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/sandbox")
	}
	
	
	
	
	
	
	
project "reachout"
	location "reachout"
	kind "SharedLib"
	language "C++"
	
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	
	files
	{
		"reachout/include/reachout/**.h",
		"reachout/src/**.cpp"
	}
	
	includedirs
	{
		"reachout/include",
		"logger/include",
		"3rdparty/freeglut/include"		
	}
	
	libdirs
    {
		"3rdparty/freeglut/lib/x64"
	}
	
	links
	{
		"freeglut",
		"logger"
	}
	
	defines
	{
		"RO_ENGINE"
	}
	
	postbuildcommands
	{
		("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/sandbox")
	}
	
	filter "system:window"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "8.1"
		
		defines
		{
			"RO_ENGINE"
		}















	
		
project "sandbox"
	location "sandbox"
	kind "ConsoleApp"
	language "C++"
	
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	
	files
	{
		"sandbox/src/**.cpp"
	}
	
	includedirs
	{
		"reachout/include"
	}	
	
	links
	{
		"reachout"
	}	
	
	filter "system:window"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "8.1"
		
