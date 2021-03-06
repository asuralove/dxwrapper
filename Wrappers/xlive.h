#pragma once

#define VISIT_PROCS(visit) \
	visit(_XWSAStartup) \
	visit(_XGetOverlappedExtendedError) \
	visit(_XGetOverlappedResult) \
	visit(_XSocketBind) \
	visit(_XSocketConnect) \
	visit(_XSocketListen) \
	visit(_XSocketAccept) \
	visit(_XSocketSelect) \
	visit(_XSocketRecv) \
	visit(_XWSACleanup) \
	visit(_XSocketRecvFrom) \
	visit(_XSocketSend) \
	visit(_XSocketSendTo) \
	visit(_XSocketInet_Addr) \
	visit(_XWSAGetLastError) \
	visit(_XCreateSocket) \
	visit(_XSocketNTOHS) \
	visit(_XSocketNTOHL) \
	visit(_XSockeClose) \
	visit(_XCustomGetLastActionPress) \
	visit(_XSocketShutdown) \
	visit(_XLiveInitialize) \
	visit(_XLiveInput) \
	visit(_XLiveRender) \
	visit(_XLiveUninitialize) \
	visit(_XLiveOnCreateDevice) \
	visit(_XLiveOnResetDevice) \
	visit(_XHVCreateEngine) \
	visit(_XLivePBufferAllocate) \
	visit(_XLivePBufferFree) \
	visit(_XLivePBufferGetByte) \
	visit(_XLivePBufferSetByte) \
	visit(_XLivePBufferGetDWORD) \
	visit(_XLivePBufferSetDWORD) \
	visit(_XLiveGetUpdateInformation) \
	visit(_XLiveUpdateSystem) \
	visit(_XLiveSetSponsorToken) \
	visit(_XLivePreTranslateMessage) \
	visit(_XLiveSetDebugLevel) \
	visit(_XLiveProtectData) \
	visit(_XLiveUnprotectData) \
	visit(_XLiveCreateProtectedDataContext) \
	visit(_XLiveQueryProtectedDataInformation) \
	visit(_XLiveCloseProtectedDataContext) \
	visit(_XNetStartup) \
	visit(_XNetCleanup) \
	visit(_XShowPlayerReviewUI) \
	visit(_XShowGuideUI) \
	visit(_XShowKeyboardUI) \
	visit(_XCloseHandle) \
	visit(_XShowGamerCardUI) \
	visit(_XCancelOverlapped) \
	visit(_XEnumerate) \
	visit(_XShowSigninUI) \
	visit(_XUserGetXUID) \
	visit(_XUserGetSigninState) \
	visit(_XUserGetName) \
	visit(_XUserAreUsersFriends) \
	visit(_XUserCheckPrivilege) \
	visit(_XUserGetSigninInfo) \
	visit(_XNotifyCreateListener) \
	visit(_XUserReadGamerpictureByKey) \
	visit(_XShowFriendsUI) \
	visit(_XUserSetProperty) \
	visit(_XUserSetContext) \
	visit(_XUserWriteAchievements) \
	visit(_XUserCreateAchievementEnumerator) \
	visit(_XUserReadStats) \
	visit(_XUserCreateStatsEnumeratorByRank) \
	visit(_XUserCreateStatsEnumeratorByXuid) \
	visit(_XUserSetContextEx) \
	visit(_XUserSetPropertyEx) \
	visit(_XLivePBufferGetByteArray) \
	visit(_XLivePBufferSetByteArray) \
	visit(_XLiveInitializeEx) \
	visit(_XSessionCreate) \
	visit(_XStringVerify) \
	visit(_XStorageUploadFromMemory) \
	visit(_XStorageEnumerate) \
	visit(_XOnlineStartup) \
	visit(_XOnlineCleanup) \
	visit(_XFriendsCreateEnumerator) \
	visit(_XUserMuteListQuery) \
	visit(_XInviteGetAcceptedInfo) \
	visit(_XInviteSend) \
	visit(_XSessionWriteStats) \
	visit(_XSessionStart) \
	visit(_XSessionSearchEx) \
	visit(_XSessionModify) \
	visit(_XSessionMigrateHost) \
	visit(_XOnlineGetNatType) \
	visit(_XSessionLeaveLocal) \
	visit(_XSessionJoinRemote) \
	visit(_XSessionJoinLocal) \
	visit(_XSessionGetDetails) \
	visit(_XSessionFlushStats) \
	visit(_XSessionDelete) \
	visit(_XUserReadProfileSettings) \
	visit(_XSessionEnd) \
	visit(_XSessionArbitrationRegister) \
	visit(_XTitleServerCreateEnumerator) \
	visit(_XSessionLeaveRemote) \
	visit(_XUserWriteProfileSettings) \
	visit(_XUserReadProfileSettingsByXuid) \
	visit(_XLiveCalculateSkill) \
	visit(_XStorageBuildServerPath) \
	visit(_XStorageDownloadToMemory) \
	visit(_XLiveProtectedVerifyFile) \
	visit(_XLiveContentCreateAccessHandle) \
	visit(_XLiveContentUninstall) \
	visit(_XLiveContentGetPath) \
	visit(_XLiveContentCreateEnumerator) \
	visit(_XLiveContentRetrieveOffersByDate) \
	visit(_XShowMarketplaceUI) \
	visit(_xlive_5367) \
	visit(_xlive_5372) \
	visit(_XNetCreateKey) \
	visit(_XNetRegisterKey) \
	visit(_XNetUnregisterKey) \
	visit(_XNetXnAddrToInAddr) \
	visit(_XNetServerToInAddr) \
	visit(_XSocketIOCTLSocket) \
	visit(_XNetInAddrToXnAddr) \
	visit(_XNetUnregisterInAddr) \
	visit(_XNetConnect) \
	visit(_XNotifyGetNext) \
	visit(_XNotifyPositionUI) \
	visit(_XNetGetConnectStatus) \
	visit(_XNetQosListen) \
	visit(_XSocketSetSockOpt) \
	visit(_XNetQosLookup) \
	visit(_XNetQosServiceLookup) \
	visit(_XNetQosRelease) \
	visit(_XNetGetTitleXnAddr) \
	visit(_XNetGetEthernetLinkStatus) \
	visit(_XNetSetSystemLinkPort) \
	visit(_XSocketGetSockName)

PROC_CLASS(xlive, dll)

#undef VISIT_PROCS
