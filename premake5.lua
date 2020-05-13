
-----------------------------------
-- WORKSPACE CONFIGURATIONS
-----------------------------------


workspace "ReachOut"
	architecture "x86"
	startproject "sandbox"
	
	configurations
	{
		"Debug", "Release"
	}
	
	outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"
	
	
	
	
	
	

	
	
	
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
		"3rdparty/spdlog/include",
		"3rdparty/sfml/include"		
	}
	
	libdirs
    {
		"3rdparty/sfml/lib"
	}
		
		
	defines
	{
		"RO_ENGINE",
		"SFML_DYNAMIC"
	}
	
	postbuildcommands
	{
		("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/sandbox")
	}
	
	filter { "system:window" }
		cppdialect "C++17"
		staticruntime "On"
		systemversion "8.1"

		
		
	filter { "configurations:Debug" }
		
		defines { "DEBUG" }
		symbols "On"
		
		links
		{			
			"sfml-system-d",		
			"sfml-graphics-d",
			"sfml-window-d"
		}	
			
		
	filter { "configurations:Release" }
		
		defines { "NDEBUG" }
		optimize "On"
		
		links
		{			
			"sfml-system",		
			"sfml-graphics",
			"sfml-window"
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
		"reachout/include",
		"3rdparty/spdlog/include",
		"3rdparty/sfml/include"		
	}	
		
	libdirs
	{
		"3rdparty/sfml/lib"
	}
	
	links
	{
		"reachout"
	}			
	
	
	postbuildcommands
	{
		("{COPY} ../3rdparty/sfml/bin ../bin/" .. outputdir .. "/sandbox")
	}

	
	
	filter { "system:window" }
		cppdialect "C++17"
		staticruntime "On"
		systemversion "8.1"
		
		
	filter { "configurations:Debug" }
		
		defines { "DEBUG" }
		symbols "On"
		
		links
		{			
			"sfml-system-d",		
			"sfml-graphics-d",
			"sfml-window-d"
		}	
			
		
	filter { "configurations:Release" }
		
		defines { "NDEBUG" }
		optimize "On"
		
		links
		{			
			"sfml-system",		
			"sfml-graphics",
			"sfml-window"
		}
		
	



