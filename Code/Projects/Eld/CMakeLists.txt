cmake_minimum_required(VERSION 2.6)

include_directories(../../Libraries/Audio/src)
include_directories(../../Libraries/Math/src)
include_directories(../../Libraries/Framework/src)
include_directories(../../Libraries/UI/src)
include_directories(../../Libraries/3D/src)
include_directories(../../Libraries/Core/src)
include_directories(../../Libraries/Rodin/src)
include_directories(../../Libraries/Workbench/src)
include_directories(src)

link_directories(${CMAKE_SOURCE_DIR}/Libraries/Audio/)
link_directories(${CMAKE_SOURCE_DIR}/Libraries/Audio/lib)
link_directories(${CMAKE_SOURCE_DIR}/Libraries/Math/)
link_directories(${CMAKE_SOURCE_DIR}/Libraries/Framework/)
link_directories(${CMAKE_SOURCE_DIR}/Libraries/UI/)
link_directories(${CMAKE_SOURCE_DIR}/Libraries/3D/)
link_directories(${CMAKE_SOURCE_DIR}/Libraries/Core/)
link_directories(${CMAKE_SOURCE_DIR}/Libraries/Rodin/)
link_directories(${CMAKE_SOURCE_DIR}/Libraries/Workbench/)
link_directories(/usr/local/lib)

set(eldritch_src
src/Achievements/achievementmanager_steam.cpp
src/Achievements/achievementmanager_steam.h
src/Achievements/iachievementmanager.h
src/Actions/wbactioneldaddblock.cpp
src/Actions/wbactioneldaddblock.h
src/Actions/wbactioneldbanktransaction.cpp
src/Actions/wbactioneldbanktransaction.h
src/Actions/wbactioneldbindinput.cpp
src/Actions/wbactioneldbindinput.h
src/Actions/wbactioneldcheckcone.cpp
src/Actions/wbactioneldcheckcone.h
src/Actions/wbactioneldcheckline.cpp
src/Actions/wbactioneldcheckline.h
src/Actions/wbactioneldchecksphere.cpp
src/Actions/wbactioneldchecksphere.h
src/Actions/wbactionelddamageworld.cpp
src/Actions/wbactionelddamageworld.h
src/Actions/wbactioneldgiveitem.cpp
src/Actions/wbactioneldgiveitem.h
src/Actions/wbactioneldgotolevel.cpp
src/Actions/wbactioneldgotolevel.h
src/Actions/wbactioneldlaunchuserid.cpp
src/Actions/wbactioneldlaunchuserid.h
src/Actions/wbactioneldlaunchwebsite.cpp
src/Actions/wbactioneldlaunchwebsite.h
src/Actions/wbactioneldopenuserdatapath.cpp
src/Actions/wbactioneldopenuserdatapath.h
src/Actions/wbactioneldplayanim.cpp
src/Actions/wbactioneldplayanim.h
src/Actions/wbactioneldplayhandanim.cpp
src/Actions/wbactioneldplayhandanim.h
src/Actions/wbactioneldpostscore.cpp
src/Actions/wbactioneldpostscore.h
src/Actions/wbactioneldremoveblock.cpp
src/Actions/wbactioneldremoveblock.h
src/Actions/wbactioneldsetlight.cpp
src/Actions/wbactioneldsetlight.h
src/Actions/wbactioneldsetpersistentvar.cpp
src/Actions/wbactioneldsetpersistentvar.h
src/Actions/wbactioneldshowbook.cpp
src/Actions/wbactioneldshowbook.h
src/Actions/wbactioneldspawnentity.cpp
src/Actions/wbactioneldspawnentity.h
src/Actions/wbactioneldstopmotion.cpp
src/Actions/wbactioneldstopmotion.h
src/Actions/wbactioneldtweetrip.cpp
src/Actions/wbactioneldtweetrip.h
src/Actions/wbactionneonawardachievement.cpp
src/Actions/wbactionneonawardachievement.h
src/Actions/wbactionneonincrementstat.cpp
src/Actions/wbactionneonincrementstat.h
src/Actions/wbactionneonsetstat.cpp
src/Actions/wbactionneonsetstat.h
src/AnimEvents/animeventeldexecuteaction.cpp
src/AnimEvents/animeventeldexecuteaction.h
src/AnimEvents/animeventeldsendevent.cpp
src/AnimEvents/animeventeldsendevent.h
src/BTNodes/rodinbtnodeeldlookat.cpp
src/BTNodes/rodinbtnodeeldlookat.h
src/BTNodes/rodinbtnodeeldmoveto.cpp
src/BTNodes/rodinbtnodeeldmoveto.h
src/BTNodes/rodinbtnodeeldplayanim.cpp
src/BTNodes/rodinbtnodeeldplayanim.h
src/BTNodes/rodinbtnodeeldplaybark.cpp
src/BTNodes/rodinbtnodeeldplaybark.h
src/BTNodes/rodinbtnodeeldstopmoving.cpp
src/BTNodes/rodinbtnodeeldstopmoving.h
src/BTNodes/rodinbtnodeeldturntoward.cpp
src/BTNodes/rodinbtnodeeldturntoward.h
src/Components/wbcompeldaimotion.cpp
src/Components/wbcompeldaimotion.h
src/Components/wbcompeldammobag.cpp
src/Components/wbcompeldammobag.h
src/Components/wbcompeldanchor.cpp
src/Components/wbcompeldanchor.h
src/Components/wbcompeldazathoth.cpp
src/Components/wbcompeldazathoth.h
src/Components/wbcompeldcamera.cpp
src/Components/wbcompeldcamera.h
src/Components/wbcompeldcharacter.cpp
src/Components/wbcompeldcharacter.h
src/Components/wbcompeldclimbable.cpp
src/Components/wbcompeldclimbable.h
src/Components/wbcompeldcollision.cpp
src/Components/wbcompeldcollision.h
src/Components/wbcompelddamager.cpp
src/Components/wbcompelddamager.h
src/Components/wbcompelddoor.cpp
src/Components/wbcompelddoor.h
src/Components/wbcompelddropshadow.cpp
src/Components/wbcompelddropshadow.h
src/Components/wbcompeldendgamecounter.cpp
src/Components/wbcompeldendgamecounter.h
src/Components/wbcompeldfaction.cpp
src/Components/wbcompeldfaction.h
src/Components/wbcompeldfootsteps.cpp
src/Components/wbcompeldfootsteps.h
src/Components/wbcompeldfrobbable.cpp
src/Components/wbcompeldfrobbable.h
src/Components/wbcompeldfrobber.cpp
src/Components/wbcompeldfrobber.h
src/Components/wbcompeldhands.cpp
src/Components/wbcompeldhands.h
src/Components/wbcompeldhard.cpp
src/Components/wbcompeldhard.h
src/Components/wbcompeldhardlistener.cpp
src/Components/wbcompeldhardlistener.h
src/Components/wbcompeldheadtracker.cpp
src/Components/wbcompeldheadtracker.h
src/Components/wbcompeldhealth.cpp
src/Components/wbcompeldhealth.h
src/Components/wbcompeldhudmarker.cpp
src/Components/wbcompeldhudmarker.h
src/Components/wbcompeldicicles.cpp
src/Components/wbcompeldicicles.h
src/Components/wbcompeldinventory.cpp
src/Components/wbcompeldinventory.h
src/Components/wbcompelditem.cpp
src/Components/wbcompelditem.h
src/Components/wbcompeldkeyring.cpp
src/Components/wbcompeldkeyring.h
src/Components/wbcompeldlight.cpp
src/Components/wbcompeldlight.h
src/Components/wbcompeldlock.cpp
src/Components/wbcompeldlock.h
src/Components/wbcompeldmapmarker.cpp
src/Components/wbcompeldmapmarker.h
src/Components/wbcompeldmarkup.cpp
src/Components/wbcompeldmarkup.h
src/Components/wbcompeldmesh.cpp
src/Components/wbcompeldmesh.h
src/Components/wbcompeldminimap.cpp
src/Components/wbcompeldminimap.h
src/Components/wbcompeldparticles.cpp
src/Components/wbcompeldparticles.h
src/Components/wbcompeldpickup.cpp
src/Components/wbcompeldpickup.h
src/Components/wbcompeldplayer.cpp
src/Components/wbcompeldplayer.h
src/Components/wbcompeldpowerteleport.cpp
src/Components/wbcompeldpowerteleport.h
src/Components/wbcompeldrespawner.cpp
src/Components/wbcompeldrespawner.h
src/Components/wbcompeldrope.cpp
src/Components/wbcompeldrope.h
src/Components/wbcompeldsensor.cpp
src/Components/wbcompeldsensor.h
src/Components/wbcompeldsensordamage.cpp
src/Components/wbcompeldsensordamage.h
src/Components/wbcompeldsensorhearing.cpp
src/Components/wbcompeldsensorhearing.h
src/Components/wbcompeldsensormarkup.cpp
src/Components/wbcompeldsensormarkup.h
src/Components/wbcompeldsensorpoll.cpp
src/Components/wbcompeldsensorpoll.h
src/Components/wbcompeldsensortheft.cpp
src/Components/wbcompeldsensortheft.h
src/Components/wbcompeldsensorvision.cpp
src/Components/wbcompeldsensorvision.h
src/Components/wbcompeldsleeper.cpp
src/Components/wbcompeldsleeper.h
src/Components/wbcompeldsouls.cpp
src/Components/wbcompeldsouls.h
src/Components/wbcompeldsound.cpp
src/Components/wbcompeldsound.h
src/Components/wbcompeldspikes.cpp
src/Components/wbcompeldspikes.h
src/Components/wbcompeldthinker.cpp
src/Components/wbcompeldthinker.h
src/Components/wbcompeldthinkerhearwormtarget.cpp
src/Components/wbcompeldthinkerhearwormtarget.h
src/Components/wbcompeldthinkerpatrol.cpp
src/Components/wbcompeldthinkerpatrol.h
src/Components/wbcompeldthinkertarget.cpp
src/Components/wbcompeldthinkertarget.h
src/Components/wbcompeldtransform.cpp
src/Components/wbcompeldtransform.h
src/Components/wbcompeldtrapbolt.cpp
src/Components/wbcompeldtrapbolt.h
src/Components/wbcompeldusable.cpp
src/Components/wbcompeldusable.h
src/Components/wbcompeldvisible.cpp
src/Components/wbcompeldvisible.h
src/Components/wbcompeldwallet.cpp
src/Components/wbcompeldwallet.h
src/Components/wbcompeldwatson.cpp
src/Components/wbcompeldwatson.h
src/Components/wbcompeldweapon.cpp
src/Components/wbcompeldweapon.h
src/Components/wbcomprodinbehaviortree_debugrender.cpp
src/Components/wbeldcomponent.cpp
src/Components/wbeldcomponent.h
src/Leaderboards/ileaderboards.h
src/Leaderboards/leaderboards_steam.cpp
src/Leaderboards/leaderboards_steam.h
src/PEs/wbpeelddistance.cpp
src/PEs/wbpeelddistance.h
src/PEs/wbpeeldgetcharactervo.cpp
src/PEs/wbpeeldgetcharactervo.h
src/PEs/wbpeeldgetfaction.cpp
src/PEs/wbpeeldgetfaction.h
src/PEs/wbpeeldgetitem.cpp
src/PEs/wbpeeldgetitem.h
src/PEs/wbpeeldgetlocation.cpp
src/PEs/wbpeeldgetlocation.h
src/PEs/wbpeeldgetpersistentvar.cpp
src/PEs/wbpeeldgetpersistentvar.h
src/PEs/wbpeeldgetplaytime.cpp
src/PEs/wbpeeldgetplaytime.h
src/PEs/wbpeeldgetslot.cpp
src/PEs/wbpeeldgetslot.h
src/PEs/wbpeeldgetvelocity.cpp
src/PEs/wbpeeldgetvelocity.h
src/PEs/wbpeeldhardscalar.cpp
src/PEs/wbpeeldhardscalar.h
src/PEs/wbpeeldhardswitch.cpp
src/PEs/wbpeeldhardswitch.h
src/PEs/wbpeeldplayer.cpp
src/PEs/wbpeeldplayer.h
src/SDPs/sdpelddropshadow.cpp
src/SDPs/sdpelddropshadow.h
src/SDPs/sdpeldfxaa.cpp
src/SDPs/sdpeldfxaa.h
src/SDPs/sdpeldhud.cpp
src/SDPs/sdpeldhud.h
src/SDPs/sdpeldhudcalibration.cpp
src/SDPs/sdpeldhudcalibration.h
src/SDPs/sdpeldlit.cpp
src/SDPs/sdpeldlit.h
src/SDPs/sdpeldpost.cpp
src/SDPs/sdpeldpost.h
src/SDPs/sdpeldworld.cpp
src/SDPs/sdpeldworld.h
src/Screens/uiscreen-eldbindinputs.cpp
src/Screens/uiscreen-eldbindinputs.h
src/Screens/uiscreen-eldcredits.cpp
src/Screens/uiscreen-eldcredits.h
src/Screens/uiscreen-eldleaderboards.cpp
src/Screens/uiscreen-eldleaderboards.h
src/Screens/uiscreen-eldmirror.cpp
src/Screens/uiscreen-eldmirror.h
src/Screens/uiscreen-eldsetres.cpp
src/Screens/uiscreen-eldsetres.h
src/eldanimevents.h
src/eldbank.cpp
src/eldbank.h
src/eldfactions.cpp
src/eldfactions.h
src/eldframework.cpp
src/eldframework.h
src/eldgame.cpp
src/eldgame.h
src/eldirradiance.cpp
src/eldirradiance.h
src/eldmesh.cpp
src/eldmesh.h
src/eldmusic.cpp
src/eldmusic.h
src/eldnav.cpp
src/eldnav.h
src/eldparticles.cpp
src/eldparticles.h
src/eldpersistence.cpp
src/eldpersistence.h
src/eldrodinbtnodes.h
src/eldroom.cpp
src/eldroom.h
src/eldsaveload.cpp
src/eldsaveload.h
src/eldsdps.h
src/eldsound3dlistener.cpp
src/eldsound3dlistener.h
src/eldsurfaces.cpp
src/eldsurfaces.h
src/eldtargetmanager.cpp
src/eldtargetmanager.h
src/eldtools.cpp
src/eldtools.h
src/elduiscreens.h
src/eldwardrobe.cpp
src/eldwardrobe.h
src/eldwbactions.h
src/eldwbcomponents.h
src/eldwbpes.h
src/eldwbscenehelpers.cpp
src/eldwbscenehelpers.h
src/eldworld.cpp
src/eldworld.h
src/eldworldgen.cpp
src/eldworldgen.h
src/exceptionwritesteamminidump.cpp
src/main.cpp
src/objcjunk.h
#~ src/steam/isteamapplist.h
#~ src/steam/isteamapps.h
#~ src/steam/isteamappticket.h
#~ src/steam/isteamclient.h
#~ src/steam/isteamcontroller.h
#~ src/steam/isteamfriends.h
#~ src/steam/isteamgamecoordinator.h
#~ src/steam/isteamgameserver.h
#~ src/steam/isteamgameserverstats.h
#~ src/steam/isteamhtmlsurface.h
#~ src/steam/isteamhttp.h
#~ src/steam/isteaminventory.h
#~ src/steam/isteammasterserverupdater.h
#~ src/steam/isteammatchmaking.h
#~ src/steam/isteammusic.h
#~ src/steam/isteammusicremote.h
#~ src/steam/isteamnetworking.h
#~ src/steam/isteamparentalsettings.h
#~ src/steam/isteamps3overlayrenderer.h
#~ src/steam/isteamremotestorage.h
#~ src/steam/isteamscreenshots.h
#~ src/steam/isteamugc.h
#~ src/steam/isteamuser.h
#~ src/steam/isteamuserstats.h
#~ src/steam/isteamutils.h
#~ src/steam/isteamvideo.h
#~ src/steam/matchmakingtypes.h
#~ src/steam/steam_api.h
#~ src/steam/steam_api_internal.h
#~ src/steam/steam_gameserver.h
#~ src/steam/steamclientpublic.h
#~ src/steam/steamencryptedappticket.h
#~ src/steam/steamhttpenums.h
#~ src/steam/steamps3params.h
#~ src/steam/steamtypes.h
#~ src/steam/steamuniverse.h
src/uiinputmapeld.cpp
src/uiinputmapeld.h
)
 
add_executable(Eldritch ${eldritch_src})

target_link_libraries(Eldritch Core Math 3D Audio SoLoud Workbench Rodin UI Framework SDL2 GL GLEW)