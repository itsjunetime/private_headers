@protocol IMDaemonProtocol
 @property (readonly, nonatomic) BOOL hasListeners
 @property (readonly, nonatomic) BOOL hasChatListeners
 @property (readonly, nonatomic) BOOL hasStatusManagingListeners
 @property (readonly, nonatomic) BOOL hasMessagesListener
 @property (strong, nonatomic) IMMessageContext *currentMessageContext
 @property (readonly, nonatomic) BOOL isSetup
 @property (readonly, nonatomic) unsigned long vcCapabilities
 @property (readonly, nonatomic) <ParentalControlsProtocol> *parentalControls

@optional
  // instance methods
 -(id)broadcasterForService:(id)arg1 messageContext:(SEL)arg2 
 -(id)broadcasterForListenersWithCapabilities:(id)arg1 forService:(SEL)arg2 messageContext:(unsigned int)arg3 
 -(id)broadcasterWithMessageContext:(id)arg1 
 -(id)broadcasterForTarget:(id)arg1 forService:(SEL)arg2 messageContext:(id)arg3 
 -(id)broadcasterForChatListenersWithMessageContext:(id)arg1 isBlackholed:(SEL)arg2 
 -(id)broadcasterForChatDatabaseListenersWithMessageContext:(id)arg1 
 -(id)broadcasterWithID:(id)arg1 messageContext:(SEL)arg2 
 -(id)broadcasterForTarget:(id)arg1 messageContext:(SEL)arg2 
 -(id)broadcasterForPaginatedChatRegistryListenersWithMessageContext:(id)arg1 
 -(id)broadcasterForAVInvitationListenersWithMessageContext:(id)arg1 
 -(id)broadcasterForAVConferenceListenersWithMessageContext:(id)arg1 
 -(id)broadcasterForACConferenceListenersWithMessageContext:(id)arg1 
 -(id)broadcasterForListenersWithCapabilities:(id)arg1 messageContext:(SEL)arg2 
 -(BOOL)haveAnyListenersWithCap:(id)arg1 
 -(BOOL)launchListenerForCapability:(id)arg1 
 -(void)postSetupToAllListeners
 -(void)updateMessage:(id)arg1 messageContext:(SEL)arg2 
 -(void)fileTransferRemoved:(id)arg1 messageContext:(SEL)arg2 
 -(void)deleteFileTransferWithGUID:(id)arg1 messageContext:(SEL)arg2 
 -(void)_updateMessage:(id)arg1 messageContext:(SEL)arg2 
 -(void)_removeAndDeleteFileTransferWithGUID:(id)arg1 
 -(id)properties
 -(id)valueOfProperty:(id)arg1 
 -(id)persistentProperties
 -(id)valueOfPersistentProperty:(id)arg1 
 -(void)_setValue:(id)arg1 ofPersistentProperty:(SEL)arg2 
 -(unsigned long)vcCapabilitiesForListenerID:(id)arg1 
 -(BOOL)hasListeners
 -(BOOL)hasChatListeners
 -(BOOL)hasStatusManagingListeners
 -(BOOL)hasMessagesListener
 -(id)currentMessageContext
 -(void)setCurrentMessageContext:(id)arg1 
 -(BOOL)isSetup
 -(unsigned long)vcCapabilities
 -(id)parentalControls

@end

@protocol IMSystemMonitorListener
@optional
  // instance methods
 -(void)systemDidBecomeIdle
 -(void)systemDidBecomeUnidle
 -(void)screenSaverDidStart
 -(void)screenSaverDidStop
 -(void)screenLocked
 -(void)screenUnlocked
 -(void)systemWillSleep
 -(void)systemDidWake
 -(void)systemDidEnterMemoryPressure
 -(void)systemDidLeaveMemoryPressure
 -(void)systemWillShutdown
 -(void)systemApplicationDidEnterBackground
 -(void)systemApplicationWillEnterForeground
 -(void)systemApplicationDidBecomeActive
 -(void)systemApplicationWillResignActive
 -(void)systemApplicationDidSuspend
 -(void)systemApplicationDidResume
 -(void)systemApplicationDidSuspendForEventsOnly
 -(void)systemApplicationDidResumeForEventsOnly
 -(void)notificationCenterWillAppear
 -(void)notificationCenterDidDisappear
 -(void)systemDidStartBackup
 -(void)systemDidStopBackup
 -(void)systemDidFinishMigration
 -(void)systemRestoreStateDidChange
 -(void)systemDidFastUserSwitchOut
 -(void)systemDidFastUserSwitchIn
 -(void)systemDidLogout
 -(void)systemDidLock
 -(void)systemDidUnlock
 -(void)systemScreenDidPowerUp
 -(void)systemScreenDidPowerDown
 -(void)systemDidLeaveFirstDataProtectionLock
 -(void)systemDidLeaveDataProtectionLock
 -(void)systemDidEnterDataProtectionLock

@end

@protocol ParentalControlsProtocol
  // instance methods
 -(BOOL)active
 -(BOOL)disableAccount:(id)arg1 
 -(BOOL)disableServiceSession:(id)arg1 
 -(id)whitelistForServiceSession:(id)arg1 
 -(BOOL)forceWhitelistForServiceSession:(id)arg1 
 -(void)updateAccountActivation

@end

@protocol NSObject
 @property (readonly) unsigned long hash
 @property (readonly) Class superclass
 @property (readonly, copy) NSString *description
 @property (readonly, copy) NSString *debugDescription

  // instance methods
 -(BOOL)isEqual:(id)arg1 
 -(Class)class
 -(id)self
 -(id)performSelector:(id)arg1 
 -(id)performSelector:(id)arg1 withObject:(SEL)arg2 
 -(id)performSelector:(id)arg1 withObject:(SEL)arg2 withObject:(SEL)arg3 
 -(BOOL)isProxy
 -(BOOL)isKindOfClass:(id)arg1 
 -(BOOL)isMemberOfClass:(id)arg1 
 -(BOOL)conformsToProtocol:(id)arg1 
 -(BOOL)respondsToSelector:(id)arg1 
 -(id)retain
 -(void)release
 -(id)autorelease
 -(unsigned long)retainCount
 -(^{_NSZone=})zone
 -(Class)superclass

@optional
  // instance methods

@end

@protocol IMDaemonListenerProtocol <NSObject>
  // instance methods
 -(void)setupComplete:(id)arg1 info:(SEL)arg2 
 -(void)setupComplete
 -(void)pendingVCRequestComplete
 -(void)pendingACRequestComplete
 -(void)vcCapabilitiesChanged:(id)arg1 
 -(void)defaultsChanged:(id)arg1 forService:(SEL)arg2 
 -(void)activeAccountsChanged:(id)arg1 forService:(SEL)arg2 
 -(void)account:(id)arg1 defaults:(SEL)arg2 blockList:(id)arg3 allowList:(id)arg4 blockingMode:(id)arg5 blockIdleStatus:(id)arg6 status:(unsigned int)arg7 capabilities:(BOOL)arg8 serviceLoginStatus:(id)arg9 loginStatusMessage:(unsigned long)arg10 
 -(void)account:(id)arg1 loginStatusChanged:(SEL)arg2 message:(id)arg3 reason:(unsigned int)arg4 properties:(id)arg5 
 -(void)account:(id)arg1 defaultsChanged:(SEL)arg2 
 -(void)account:(id)arg1 capabilitiesChanged:(SEL)arg2 
 -(void)accountAdded:(id)arg1 defaults:(SEL)arg2 service:(id)arg3 
 -(void)accountRemoved:(id)arg1 
 -(void)account:(id)arg1 buddyPropertiesChanged:(SEL)arg2 
 -(void)account:(id)arg1 blockListChanged:(SEL)arg2 
 -(void)account:(id)arg1 allowListChanged:(SEL)arg2 
 -(void)account:(id)arg1 blockingModeChanged:(SEL)arg2 
 -(void)account:(id)arg1 blockIdleStatusChanged:(SEL)arg2 
 -(void)account:(id)arg1 buddyPictureChanged:(SEL)arg2 imageData:(id)arg3 imageHash:(id)arg4 
 -(void)account:(id)arg1 groupsChanged:(SEL)arg2 error:(id)arg3 
 -(void)account:(id)arg1 buddyProperties:(SEL)arg2 buddyPictures:(id)arg3 
 -(void)account:(id)arg1 handleSubscriptionRequestFrom:(SEL)arg2 withMessage:(id)arg3 
 -(void)networkDataAvailabilityChanged:(id)arg1 
 -(void)account:(id)arg1 buddyInfo:(SEL)arg2 commandReceived:(id)arg3 properties:(id)arg4 
 -(void)account:(id)arg1 buddyInfo:(SEL)arg2 commandDelivered:(id)arg3 properties:(id)arg4 
 -(void)chat:(id)arg1 updated:(SEL)arg2 
 -(void)chat:(id)arg1 propertiesUpdated:(SEL)arg2 
 -(void)chat:(id)arg1 chatPersonCentricID:(SEL)arg2 displayNameUpdated:(id)arg3 
 -(void)chat:(id)arg1 chatPersonCentricID:(SEL)arg2 displayNameUpdated:(id)arg3 sender:(id)arg4 
 -(void)chat:(id)arg1 lastAddressedHandleUpdated:(SEL)arg2 
 -(void)chat:(id)arg1 lastAddressedSIMIDUpdated:(SEL)arg2 
 -(void)chat:(id)arg1 isFilteredUpdated:(SEL)arg2 
 -(void)chat:(id)arg1 engramIDUpdated:(SEL)arg2 
 -(void)chat:(id)arg1 nicknamesUpdated:(SEL)arg2 
 -(void)leftChat:(id)arg1 
 -(void)engroupParticipantsUpdatedForChat:(id)arg1 
 -(void)loadedChats:(id)arg1 
 -(void)chatsNeedRemerging:(id)arg1 groupedChats:(SEL)arg2 
 -(void)account:(id)arg1 chat:(SEL)arg2 style:(id)arg3 chatProperties:(id)arg4 invitationReceived:(unsigned char)arg5 
 -(void)account:(id)arg1 chat:(SEL)arg2 style:(id)arg3 chatProperties:(id)arg4 updateProperties:(unsigned char)arg5 
 -(void)account:(id)arg1 chat:(SEL)arg2 style:(id)arg3 chatProperties:(id)arg4 groupID:(unsigned char)arg5 chatPersonCentricID:(id)arg6 messageSent:(id)arg7 
 -(void)account:(id)arg1 chat:(SEL)arg2 style:(id)arg3 chatProperties:(id)arg4 groupID:(unsigned char)arg5 chatPersonCentricID:(id)arg6 messageReceived:(id)arg7 
 -(void)account:(id)arg1 chat:(SEL)arg2 style:(id)arg3 chatProperties:(id)arg4 groupID:(unsigned char)arg5 chatPersonCentricID:(id)arg6 messagesReceived:(id)arg7 messagesComingFromStorage:(id)arg8 
 -(void)account:(id)arg1 chat:(SEL)arg2 style:(id)arg3 chatProperties:(id)arg4 messageUpdated:(unsigned char)arg5 
 -(void)account:(id)arg1 chat:(SEL)arg2 style:(id)arg3 chatProperties:(id)arg4 notifySentMessage:(unsigned char)arg5 sendTime:(id)arg6 
 -(void)account:(id)arg1 chat:(SEL)arg2 style:(id)arg3 chatProperties:(id)arg4 messagesUpdated:(unsigned char)arg5 
 -(void)service:(id)arg1 chat:(SEL)arg2 style:(id)arg3 messagesUpdated:(id)arg4 
 -(void)account:(id)arg1 chat:(SEL)arg2 style:(id)arg3 chatProperties:(id)arg4 error:(unsigned char)arg5 
 -(void)account:(id)arg1 chat:(SEL)arg2 style:(id)arg3 chatProperties:(id)arg4 groupID:(unsigned char)arg5 chatPersonCentricID:(id)arg6 statusChanged:(id)arg7 handleInfo:(id)arg8 
 -(void)account:(id)arg1 chat:(SEL)arg2 style:(id)arg3 chatProperties:(id)arg4 chatPersonCentricID:(unsigned char)arg5 member:(id)arg6 statusChanged:(id)arg7 
 -(void)messageQuery:(id)arg1 finishedWithResult:(SEL)arg2 chatGUIDs:(id)arg3 
 -(void)messageItemQuery:(id)arg1 finishedWithResult:(SEL)arg2 chatGUIDs:(id)arg3 
 -(void)historyQuery:(id)arg1 chatID:(SEL)arg2 services:(id)arg3 finishedWithResult:(id)arg4 limit:(id)arg5 
 -(void)pagedHistoryQuery:(id)arg1 chatID:(SEL)arg2 services:(id)arg3 numberOfMessagesBefore:(id)arg4 numberOfMessagesAfter:(id)arg5 finishedWithResult:(unsigned long)arg6 hasMessagesBefore:(unsigned long)arg7 hasMessagesAfter:(id)arg8 
 -(void)attachmentQuery:(id)arg1 chatID:(SEL)arg2 services:(id)arg3 finishedWithResult:(id)arg4 
 -(void)uncachedAttachmentCountQuery:(id)arg1 chatID:(SEL)arg2 services:(id)arg3 finishedWithResult:(id)arg4 
 -(void)isDownloadingQuery:(id)arg1 chatID:(SEL)arg2 services:(id)arg3 finishedWithResult:(id)arg4 
 -(void)downloadedPurgedAssetBatchForChatIDs:(id)arg1 completedTransferGUIDs:(SEL)arg2 
 -(void)finishedDownloadingPurgedAssetsForChatIDs:(id)arg1 
 -(void)markAsSpamQuery:(id)arg1 chatID:(SEL)arg2 services:(id)arg3 finishedWithResult:(id)arg4 
 -(void)historicalMessageGUIDsDeleted:(id)arg1 chatGUIDs:(SEL)arg2 queryID:(id)arg3 
 -(void)frequentRepliesQuery:(id)arg1 chatID:(SEL)arg2 services:(id)arg3 finishedWithResult:(id)arg4 limit:(id)arg5 
 -(void)_automation_markAsReadQuery:(id)arg1 finishedWithResult:(SEL)arg2 
 -(void)chatLoadedWithChatIdentifier:(id)arg1 chats:(SEL)arg2 
 -(void)previouslyBlackholedChatLoadedWithHandleIDs:(id)arg1 chat:(SEL)arg2 
 -(void)blackholedChatsExist:(id)arg1 
 -(void)groupPhotoUpdatedForChatIdentifier:(id)arg1 style:(SEL)arg2 account:(id)arg3 userInfo:(unsigned char)arg4 
 -(void)fileTransfer:(id)arg1 createdWithProperties:(SEL)arg2 
 -(void)fileTransfer:(id)arg1 updatedWithProperties:(SEL)arg2 
 -(void)fileTransfers:(id)arg1 createdWithLocalPaths:(SEL)arg2 
 -(void)fileTransfer:(id)arg1 updatedWithCurrentBytes:(SEL)arg2 totalBytes:(id)arg3 averageTransferRate:(unsigned long)arg4 
 -(void)fileTransfer:(id)arg1 highQualityDownloadSucceededWithPath:(SEL)arg2 
 -(void)fileTransferHighQualityDownloadFailed:(id)arg1 
 -(void)account:(id)arg1 conference:(SEL)arg2 receivedInvitationFrom:(id)arg3 properties:(id)arg4 
 -(void)account:(id)arg1 conference:(SEL)arg2 receivedResponseToInvitationFrom:(id)arg3 properties:(id)arg4 
 -(void)account:(id)arg1 conference:(SEL)arg2 receivedCancelInvitationFrom:(id)arg3 properties:(id)arg4 
 -(void)account:(id)arg1 conference:(SEL)arg2 receivedCounterProposalFrom:(id)arg3 properties:(id)arg4 
 -(void)account:(id)arg1 conference:(SEL)arg2 receivedUpdateFrom:(id)arg3 data:(id)arg4 
 -(void)account:(id)arg1 conference:(SEL)arg2 receivedAVMessage:(id)arg3 from:(id)arg4 sessionID:(unsigned int)arg5 userInfo:(id)arg6 
 -(void)account:(id)arg1 conference:(SEL)arg2 changedToNewConferenceID:(id)arg3 
 -(void)account:(id)arg1 conference:(SEL)arg2 peerIDChangedFromID:(id)arg3 toID:(id)arg4 
 -(void)account:(id)arg1 conference:(SEL)arg2 peerID:(id)arg3 propertiesUpdated:(id)arg4 
 -(void)account:(id)arg1 conference:(SEL)arg2 invitationSentSuccessfully:(id)arg3 
 -(void)account:(id)arg1 avAction:(SEL)arg2 withArguments:(id)arg3 toAVChat:(unsigned int)arg4 isVideo:(id)arg5 
 -(void)showInvalidCertNotificationForAccount:(id)arg1 
 -(void)showForgotPasswordNotificationForAccount:(id)arg1 
 -(void)property:(id)arg1 changedTo:(SEL)arg2 from:(id)arg3 
 -(void)persistentProperty:(id)arg1 changedTo:(SEL)arg2 from:(id)arg3 
 -(void)account:(id)arg1 statusChanged:(SEL)arg2 
 -(void)account:(id)arg1 postedError:(SEL)arg2 
 -(void)account:(id)arg1 relay:(SEL)arg2 handleInitate:(id)arg3 fromPerson:(id)arg4 
 -(void)account:(id)arg1 relay:(SEL)arg2 handleUpdate:(id)arg3 fromPerson:(id)arg4 
 -(void)account:(id)arg1 relay:(SEL)arg2 handleCancel:(id)arg3 fromPerson:(id)arg4 
 -(void)databaseUpdated
 -(void)databaseUpdated:(id)arg1 
 -(void)databaseChatSpamUpdated:(id)arg1 
 -(void)unreadCountChanged:(id)arg1 
 -(void)lastFailedMessageDateChanged:(id)arg1 
 -(void)displayPinCodeForAccount:(id)arg1 pinCode:(SEL)arg2 deviceName:(id)arg3 deviceType:(id)arg4 phoneNumber:(id)arg5 
 -(void)pinCodeAlertCompleted:(id)arg1 deviceName:(SEL)arg2 deviceType:(id)arg3 phoneNumber:(id)arg4 responseFromDevice:(id)arg5 wasCancelled:(id)arg6 
 -(void)stickerPackUpdated:(id)arg1 
 -(void)stickerPackRemoved:(id)arg1 
 -(void)qosClassWhileServicingRequestsResponse:(id)arg1 identifier:(SEL)arg2 
 -(void)nicknameRequestResponse:(id)arg1 encodedNicknameData:(SEL)arg2 
 -(void)updateNicknameData:(id)arg1 
 -(void)updatePendingNicknameUpdates:(id)arg1 handledNicknameUpdates:(SEL)arg2 
 -(void)updateNicknameHandlesSharing:(id)arg1 handlesBlocked:(SEL)arg2 
 -(void)handlesSharingNicknamesDidChange
 -(void)pendingNicknamesOrHandledNicknamesDidChange
 -(void)updatePersonalNickname:(id)arg1 
 -(void)updateCloudKitState
 -(void)updateCloudKitStateWithDictionary:(id)arg1 
 -(void)didAttemptToSetEnabledTo:(id)arg1 result:(SEL)arg2 
 -(void)didPerformAdditionalStorageRequiredCheckWithSuccess:(id)arg1 additionalStorageRequired:(SEL)arg2 forAccountId:(BOOL)arg3 error:(unsigned long)arg4 
 -(void)didAttemptToDisableAllDevicesResult:(id)arg1 
 -(void)didFetchSyncStateStats:(id)arg1 
 -(void)didFetchRampState:(id)arg1 
 -(void)didAttemptToDisableiCloudBackups:(id)arg1 error:(SEL)arg2 
 -(void)oneTimeCodesDidChange:(id)arg1 
 -(void)receivedUrgentRequestForMessages:(id)arg1 
 -(void)didFetchCloudKitSyncDebuggingInfo:(id)arg1 
 -(void)screenTimeEnablementChanged:(id)arg1 
 -(void)lastMessageForAllChats:(id)arg1 
 -(void)lastMessageForChats:(id)arg1 

@end

@protocol IMRemoteDaemonProtocol <NSObject>
  // instance methods
 -(void)autoLoginActiveAccountsIfNecessary
 -(void)loginAllAccounts
 -(void)logoutAllAccounts
 -(void)terminateForcingIfNeeded:(id)arg1 
 -(void)changeMyStatus:(id)arg1 forAccount:(SEL)arg2 
 -(void)setValue:(id)arg1 ofProperty:(SEL)arg2 
 -(void)setValue:(id)arg1 ofPersistentProperty:(SEL)arg2 
 -(void)setVCCapabilities:(id)arg1 
 -(void)requestPendingVCInvites
 -(void)requestPendingACInvites
 -(void)activateAccounts:(id)arg1 
 -(void)deactivateAccounts:(id)arg1 
 -(void)addAccount:(id)arg1 defaults:(SEL)arg2 service:(id)arg3 
 -(void)removeAccount:(id)arg1 
 -(void)writeAccount:(id)arg1 defaults:(SEL)arg2 
 -(void)requestNetworkDataAvailability
 -(void)requestBuddyPicturesAndPropertiesForAccount:(id)arg1 
 -(void)sendStandaloneFileTransfer:(id)arg1 
 -(void)deleteFileTransferWithGUID:(id)arg1 
 -(void)downloadHighQualityVariantOfFileTransferWithGUID:(id)arg1 
 -(void)fileTransfer:(id)arg1 createdWithProperties:(SEL)arg2 
 -(void)fileTransfer:(id)arg1 updatedWithProperties:(SEL)arg2 
 -(void)fileTransfer:(id)arg1 acceptedWithPath:(SEL)arg2 autoRename:(id)arg3 overwrite:(id)arg4 
 -(void)fileTransferStopped:(id)arg1 
 -(void)fileTransferRemoved:(id)arg1 
 -(BOOL)markAttachment:(id)arg1 sender:(SEL)arg2 recipients:(id)arg3 isIncoming:(id)arg4 
 -(void)clearPendingVCRequestsWithPerson:(id)arg1 forAccount:(SEL)arg2 
 -(void)conference:(id)arg1 account:(SEL)arg2 notifyInvitationCancelledFromPerson:(id)arg3 
 -(void)account:(id)arg1 avAction:(SEL)arg2 withArguments:(id)arg3 toAVChat:(unsigned int)arg4 isVideo:(id)arg5 
 -(void)inviteHandleIDToShareMyScreen:(id)arg1 isContact:(SEL)arg2 
 -(void)askHandleIDToShareTheirScreen:(id)arg1 isContact:(SEL)arg2 
 -(void)setListenerCapabilities:(id)arg1 
 -(void)loadChatsWithChatID:(id)arg1 
 -(void)loadMessageWithGUID:(id)arg1 queryID:(SEL)arg2 
 -(void)loadMessageItemWithGUID:(id)arg1 queryID:(SEL)arg2 
 -(void)loadHistoryForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 limit:(unsigned char)arg4 beforeGUID:(id)arg5 afterGUID:(unsigned long)arg6 threadIdentifier:(id)arg7 chatID:(id)arg8 queryID:(id)arg9 
 -(void)loadPagedHistoryForGUID:(id)arg1 chatIdentifiers:(SEL)arg2 style:(id)arg3 onServices:(id)arg4 numberOfMessagesBefore:(unsigned char)arg5 numberOfMessagesAfter:(id)arg6 threadIdentifier:(unsigned long)arg7 chatID:(unsigned long)arg8 queryID:(id)arg9 
 -(void)requestPendingMessages
 -(void)deleteMessageWithGUIDs:(id)arg1 queryID:(SEL)arg2 
 -(void)clearHistoryForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 beforeGUID:(unsigned char)arg4 afterGUID:(id)arg5 chatID:(id)arg6 queryID:(id)arg7 
 -(void)markAsSpamForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 chatID:(unsigned char)arg4 queryID:(id)arg5 autoReport:(id)arg6 
 -(void)updateMessage:(id)arg1 
 -(void)updateMessage:(id)arg1 withIndexesOfDeletedItems:(SEL)arg2 withIndexToRangeMapOfDeletedItems:(id)arg3 
 -(void)markMessageAsCorrupt:(id)arg1 setCorrupt:(SEL)arg2 
 -(void)markReadForMessageGUID:(id)arg1 
 -(void)markReadForMessageGUID:(id)arg1 callerOrigin:(SEL)arg2 
 -(void)_automation_markMessagesAsRead:(id)arg1 messageGUID:(SEL)arg2 forChatGUID:(BOOL)arg3 fromMe:(id)arg4 queryID:(id)arg5 
 -(void)markReadForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 messages:(unsigned char)arg4 clientUnreadCount:(id)arg5 
 -(void)markReadForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 messages:(unsigned char)arg4 clientUnreadCount:(id)arg5 setUnreadCountToZero:(id)arg6 
 -(void)playSendSoundForMessageGUID:(id)arg1 callerOrigin:(SEL)arg2 
 -(void)storeItem:(id)arg1 inChatGUID:(SEL)arg2 
 -(void)markPlayedForMessageGUID:(id)arg1 
 -(void)markPlayedForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 message:(unsigned char)arg4 
 -(void)markPlayedExpressiveSendForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 message:(unsigned char)arg4 
 -(void)markSavedForMessageGUID:(id)arg1 
 -(void)markSavedForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 message:(unsigned char)arg4 
 -(void)markHasHadSuccessfulQueryForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 
 -(void)updateUnformattedID:(id)arg1 forBuddyID:(SEL)arg2 onService:(id)arg3 
 -(void)loadFrequentRepliesForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 limit:(unsigned char)arg4 chatID:(id)arg5 queryID:(unsigned long)arg6 
 -(void)loadUnreadForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 limit:(unsigned char)arg4 fallbackGUID:(id)arg5 chatId:(unsigned long)arg6 queryID:(id)arg7 
 -(void)loadAttachmentsForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 chatID:(unsigned char)arg4 queryID:(id)arg5 
 -(unsigned long)loadUncachedAttachmentCountForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 chatID:(unsigned char)arg4 queryID:(id)arg5 
 -(void)downloadPurgedAttachmentsForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 chatID:(unsigned char)arg4 
 -(void)loadIsDownloadingPurgedAttachmentsForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 chatID:(unsigned char)arg4 queryID:(id)arg5 
 -(void)requestLastMessagesForChats
 -(void)initiateQuickSwitch
 -(void)fetchInternalPhishingBlacklist
 -(void)loadInternalPhishingBlacklist
 -(void)cleanupAttachments
 -(void)chat:(id)arg1 updateProperties:(SEL)arg2 
 -(void)chat:(id)arg1 updateDisplayName:(SEL)arg2 
 -(void)chat:(id)arg1 updateIsFiltered:(SEL)arg2 
 -(void)chat:(id)arg1 updateIsBlackholed:(SEL)arg2 
 -(void)chat:(id)arg1 updateLastAddressHandle:(SEL)arg2 
 -(void)chat:(id)arg1 updateLastAddressedSIMID:(SEL)arg2 
 -(void)silenceChat:(id)arg1 untilDate:(SEL)arg2 
 -(void)removeChat:(id)arg1 
 -(void)loadChatWithChatIdentifier:(id)arg1 
 -(void)unblackholeAndLoadChatWithHandleIDs:(id)arg1 
 -(void)debugUpdateGroupParticipantversion:(id)arg1 chatIdentifier:(SEL)arg2 
 -(void)purgeAttachmentsForChatGUID:(id)arg1 
 -(void)archiveChat:(id)arg1 
 -(void)autoLoginAccount:(id)arg1 
 -(void)autoReconnectAccount:(id)arg1 
 -(void)loginAccount:(id)arg1 
 -(void)logoutAccount:(id)arg1 
 -(void)sendMappingPacket:(id)arg1 toHandle:(SEL)arg2 account:(id)arg3 
 -(void)holdBuddyUpdatesAccount:(id)arg1 
 -(void)resumeBuddyUpdatesAccount:(id)arg1 
 -(void)authenticateAccount:(id)arg1 
 -(void)registerAccount:(id)arg1 
 -(void)unregisterAccount:(id)arg1 
 -(void)requestGroupsAccount:(id)arg1 
 -(void)changeGroups:(id)arg1 account:(SEL)arg2 
 -(void)changeGroup:(id)arg1 changes:(SEL)arg2 account:(id)arg3 
 -(void)renameGroup:(id)arg1 to:(SEL)arg2 account:(id)arg3 
 -(void)acceptSubscriptionRequest:(id)arg1 from:(SEL)arg2 account:(BOOL)arg3 
 -(void)requestSubscriptionTo:(id)arg1 account:(SEL)arg2 
 -(void)startWatchingBuddy:(id)arg1 account:(SEL)arg2 
 -(void)stopWatchingBuddy:(id)arg1 account:(SEL)arg2 
 -(void)requestProperty:(id)arg1 ofPerson:(SEL)arg2 account:(id)arg3 
 -(void)setValue:(id)arg1 ofProperty:(SEL)arg2 ofPerson:(id)arg3 account:(id)arg4 
 -(void)updateAuthorizationCredentials:(id)arg1 token:(SEL)arg2 account:(id)arg3 
 -(void)joinChatID:(id)arg1 handleInfo:(SEL)arg2 identifier:(id)arg3 style:(id)arg4 joinProperties:(id)arg5 account:(unsigned char)arg6 
 -(void)joinChatID:(id)arg1 handleInfo:(SEL)arg2 identifier:(id)arg3 style:(id)arg4 groupID:(id)arg5 lastAddressedHandle:(unsigned char)arg6 lastAddressedSIMID:(id)arg7 joinProperties:(id)arg8 account:(id)arg9 
 -(void)leaveChatID:(id)arg1 identifier:(SEL)arg2 style:(id)arg3 account:(id)arg4 
 -(void)leaveiMessageChatID:(id)arg1 identifier:(SEL)arg2 style:(id)arg3 account:(id)arg4 
 -(void)removeChatID:(id)arg1 identifier:(SEL)arg2 style:(id)arg3 account:(id)arg4 
 -(void)invitePersonInfo:(id)arg1 withMessage:(SEL)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(id)arg5 account:(id)arg6 
 -(void)invitePersonInfoToiMessageChat:(id)arg1 withMessage:(SEL)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(id)arg5 account:(id)arg6 
 -(void)removePersonInfo:(id)arg1 chatID:(SEL)arg2 identifier:(id)arg3 style:(id)arg4 account:(id)arg5 
 -(void)removePersonInfoFromiMessageChat:(id)arg1 chatID:(SEL)arg2 identifier:(id)arg3 style:(id)arg4 account:(id)arg5 
 -(void)declineInvitationToChatID:(id)arg1 identifier:(SEL)arg2 style:(id)arg3 account:(id)arg4 
 -(void)sendGroupPhotoUpdate:(id)arg1 toChatID:(SEL)arg2 identifier:(id)arg3 style:(id)arg4 account:(id)arg5 
 -(void)retryGroupPhotoUpload:(id)arg1 toChatID:(SEL)arg2 identifier:(id)arg3 style:(id)arg4 account:(id)arg5 
 -(void)eagerUploadTransfer:(id)arg1 recipients:(SEL)arg2 
 -(void)eagerUploadCancel:(id)arg1 
 -(void)sendMessage:(id)arg1 toChatID:(SEL)arg2 identifier:(id)arg3 style:(id)arg4 account:(id)arg5 
 -(void)logDumpAndSendMessageTo:(id)arg1 forHours:(SEL)arg2 
 -(void)_automation_sendDictionary:(id)arg1 options:(SEL)arg2 toHandles:(id)arg3 
 -(void)_automation_receiveDictionary:(id)arg1 fromID:(SEL)arg2 
 -(void)sendStickerAtPath:(id)arg1 toChatID:(SEL)arg2 forNBubbleFromTheBottom:(id)arg3 atX:(id)arg4 atY:(unsigned long)arg5 scale:(id)arg6 balloonWidth:(id)arg7 
 -(void)sendReadReceiptForMessage:(id)arg1 toChatID:(SEL)arg2 identifier:(id)arg3 style:(id)arg4 account:(id)arg5 
 -(void)sendPlayedReceiptForMessage:(id)arg1 toChatID:(SEL)arg2 identifier:(id)arg3 style:(id)arg4 account:(id)arg5 
 -(void)sendSavedReceiptForMessage:(id)arg1 toChatID:(SEL)arg2 identifier:(id)arg3 style:(id)arg4 account:(id)arg5 
 -(void)sendBalloonPayload:(id)arg1 attachments:(SEL)arg2 withMessageGUID:(id)arg3 bundleID:(id)arg4 
 -(void)updateBalloonPayload:(id)arg1 attachments:(SEL)arg2 forMessageGUID:(id)arg3 
 -(void)setProperties:(id)arg1 ofParticipant:(SEL)arg2 inChatID:(id)arg3 identifier:(id)arg4 style:(id)arg5 account:(id)arg6 
 -(void)setBlockingMode:(id)arg1 account:(SEL)arg2 
 -(void)setAllowList:(id)arg1 account:(SEL)arg2 
 -(void)setBlockList:(id)arg1 account:(SEL)arg2 
 -(void)setBlockIdleStatus:(id)arg1 account:(SEL)arg2 
 -(void)passwordUpdatedAccount:(id)arg1 
 -(void)sendNotificationMessageToUniqueID:(id)arg1 withCommand:(SEL)arg2 
 -(void)sendCommand:(id)arg1 withProperties:(SEL)arg2 toPerson:(id)arg3 account:(id)arg4 
 -(void)sendCommand:(id)arg1 withProperties:(SEL)arg2 toPerson:(id)arg3 account:(id)arg4 toChatID:(id)arg5 identifier:(id)arg6 style:(id)arg7 
 -(void)requestVCWithPerson:(id)arg1 properties:(SEL)arg2 conference:(id)arg3 account:(id)arg4 
 -(void)respondToVCInvitationWithPerson:(id)arg1 properties:(SEL)arg2 conference:(id)arg3 account:(id)arg4 
 -(void)cancelVCRequestWithPerson:(id)arg1 properties:(SEL)arg2 conference:(id)arg3 account:(id)arg4 
 -(void)cancelVCRequestWithPerson:(id)arg1 properties:(SEL)arg2 conference:(id)arg3 reason:(id)arg4 account:(id)arg5 
 -(void)sendCounterProposalToPerson:(id)arg1 properties:(SEL)arg2 conference:(id)arg3 account:(id)arg4 
 -(void)sendVCUpdate:(id)arg1 toPerson:(SEL)arg2 conference:(id)arg3 account:(id)arg4 
 -(void)sendAVMessageToPerson:(id)arg1 sessionID:(SEL)arg2 type:(id)arg3 userInfo:(unsigned int)arg4 conference:(unsigned int)arg5 account:(id)arg6 
 -(void)relay:(id)arg1 sendInitateRequest:(SEL)arg2 toPerson:(id)arg3 account:(id)arg4 
 -(void)relay:(id)arg1 sendUpdate:(SEL)arg2 toPerson:(id)arg3 account:(id)arg4 
 -(void)relay:(id)arg1 sendCancel:(SEL)arg2 toPerson:(id)arg3 account:(id)arg4 
 -(void)addAliases:(id)arg1 account:(SEL)arg2 
 -(void)removeAliases:(id)arg1 account:(SEL)arg2 
 -(void)validateAliases:(id)arg1 account:(SEL)arg2 
 -(void)unvalidateAliases:(id)arg1 account:(SEL)arg2 
 -(void)validateProfileAccount:(id)arg1 
 -(void)importMessage:(id)arg1 isRead:(SEL)arg2 
 -(void)enrollDeviceForSMSRelay:(id)arg1 account:(SEL)arg2 
 -(void)unEnrollDeviceForSMSRelay:(id)arg1 account:(SEL)arg2 
 -(void)enrollSelfDeviceForSMSRelay:(id)arg1 
 -(void)downloadStickerWithGUID:(id)arg1 
 -(void)downloadStickerPackWithGUID:(id)arg1 isIncomingMessage:(SEL)arg2 ignoreCache:(id)arg3 
 -(void)replayMessagesFromDatabasePath:(id)arg1 
 -(void)beginRecordingMessagesToReplayDatabase:(id)arg1 
 -(void)stopRecordingMessagesReplayDatabase
 -(void)requestQOSClassWhileServicingRequestsWithID:(id)arg1 
 -(void)createChatZone
 -(void)deleteChatZone
 -(void)writeDirtyChats
 -(void)syncChats
 -(void)markAllChatsAsDirty
 -(void)clearChatZoneSyncToken
 -(void)createAttachmentZone
 -(void)deleteAttachmentZone
 -(void)writeAttachments
 -(void)syncAttachments
 -(void)downloadAttachmentAssets
 -(void)writeDirtyMessages
 -(void)deleteMessagesZone
 -(void)syncMessages
 -(void)initiatePeriodicSync
 -(void)loadDirtyMessagesWithLimit:(id)arg1 
 -(void)loadDeletedMessagesWithLimit:(id)arg1 
 -(void)writeExitRecord
 -(void)fetchExitRecord
 -(void)deleteExitRecord
 -(void)clearLocalCloudKitSyncState
 -(void)clearDataFromCloudKit
 -(void)sendRestoreFailuresLogDumps
 -(void)setCloudKitEnabled:(id)arg1 
 -(void)performAdditionalStorageRequiredCheck
 -(void)tryToDisableAllDevices
 -(void)initiateSync
 -(void)broadcastCloudKitState
 -(void)broadcastCloudKitStateAfterFetchingAccountStatus
 -(void)uploadDailyAnalyticstoCloudKit
 -(void)clearAnalyticDefaultsAndLocalSyncState
 -(void)broadcastCloudKitStateAfterClearingErrors
 -(void)fetchAccountStatusAndUpdateMiCSwitchEligibility
 -(void)fetchLatestSalt
 -(void)printCachedSalt
 -(void)deleteSalt
 -(void)purgeAttachments:(id)arg1 
 -(void)metricAttachments:(id)arg1 
 -(void)updateAttachmentFileSizes
 -(void)fetchSyncStateStatistics
 -(void)writeCloudKitSyncCounts:(id)arg1 
 -(void)reportMetricToCK:(id)arg1 withDict:(SEL)arg2 
 -(void)fetchLatestRampState
 -(void)printCachedRampState
 -(void)syncDeletesToCloudKit
 -(void)fetchCloudKitSyncStateDebuggingInfo:(id)arg1 
 -(void)tryToAutoCollectLogsWithErrorString:(id)arg1 sendLogsTo:(SEL)arg2 
 -(void)closeSessionChatID:(id)arg1 identifier:(SEL)arg2 style:(id)arg3 account:(id)arg4 
 -(void)requestOneTimeCodeStatus
 -(void)consumeCodeWithMessageGUID:(id)arg1 
 -(void)simulateOneTimeCodeArriving:(id)arg1 
 -(void)fetchNicknames
 -(void)fetchHandleSharingState
 -(void)clearPendingNicknameUpdatesForHandleIDs:(id)arg1 
 -(void)ignorePendingNicknameUpdatesForHandleIDs:(id)arg1 
 -(void)whitelistHandleIDsForNicknameSharing:(id)arg1 onChatGUIDs:(SEL)arg2 
 -(void)blacklistHandleIDsForNicknameSharing:(id)arg1 
 -(void)nicknamePreferencesDidChange
 -(void)fetchPersonalNickname
 -(void)setNewPersonalNickname:(id)arg1 
 -(void)userNicknameForRecordID:(id)arg1 decryptionKey:(SEL)arg2 requestID:(id)arg3 
 -(void)markAllNicknamesAsPending
 -(void)simulateMessageReceive:(id)arg1 serviceName:(SEL)arg2 groupID:(id)arg3 handles:(id)arg4 sender:(id)arg5 
 -(void)preWarm
 -(void)requestScreenTimeAvailability

@end

0x0010007dc08 IMDaemon : NSObject /usr/lib/libobjc.A.dylib <IMDaemonProtocol, IMSystemMonitorListener>
{
	+0x0008 @"NSRecursiveLock" _listenerLock (0x8)
	+0x0010 @"NSMutableArray" _listeners (0x8)
	+0x0018 @"NSMutableArray" _listenerLocalObjects (0x8)
	+0x0020 @"NSMutableArray" _listenerIDs (0x8)
	+0x0028 @"NSMutableArray" _listenerBundleIDs (0x8)
	+0x0030 @"NSMutableArray" _listenerCaps (0x8)
	+0x0038 @"NSMutableArray" _listenerVCCaps (0x8)
	+0x0040 @"NSMutableArray" _listenerProperties (0x8)
	+0x0048 @"NSMutableArray" _listenerAllowedServices (0x8)
	+0x0050 @"NSMutableArray" _listenerDeniedServices (0x8)
	+0x0058 @"IMRemoteObjectBroadcaster" _notifier (0x8)
	+0x0060 @"IMMessageContext" _currentMessageContext (0x8)
	+0x0068 @"NSMutableArray" _autoLoggedOffAccounts (0x8)
	+0x0070 @"NSMutableArray" _autoAwayAccounts (0x8)
	+0x0078 @"NSMutableDictionary" _autoAccountsToStatusMessageMap (0x8)
	+0x0080 @"NSMutableDictionary" _properties (0x8)
	+0x0088 @"NSMutableDictionary" _persistentProperties (0x8)
	+0x0090 @"NSPort" _activePort (0x8)
	+0x0098 @"NSMutableDictionary" _invocationQueues (0x8)
	+0x00a0 c _switchedOut (0x1)
	+0x00a1 c _pendingCapabilitiesRefresh (0x1)
	+0x00a2 c _setupComplete (0x1)
	+0x00a4 i _avToken (0x4)
	+0x00a8 i _acToken (0x4)
	+0x00ac c _isListeningForHighQualityFileTransferVariantNotifications (0x1)
	+0x00b0 @"NSMutableSet" _isCurrentlyDownloadingSet (0x8)
	+0x00b8 @"NSMutableDictionary" _downloadingCountDictionary (0x8)
	+0x00c0 @"IMDiMessageIDSDelegate" _iMessageIDSDelegate (0x8)
}
 @property (readonly, strong) NSMutableDictionary *properties
 @property (readonly, strong) NSMutableDictionary *persistentProperties
 @property (strong) IMDiMessageIDSDelegate *iMessageIDSDelegate
 @property (readonly, nonatomic) BOOL hasListeners
 @property (readonly, nonatomic) BOOL hasChatListeners
 @property (readonly, nonatomic) BOOL hasStatusManagingListeners
 @property (readonly, nonatomic) BOOL hasMessagesListener
 @property (strong, nonatomic) IMMessageContext *currentMessageContext
 @property (readonly, nonatomic) BOOL isSetup
 @property (readonly, nonatomic) unsigned long vcCapabilities
 @property (readonly, nonatomic) <ParentalControlsProtocol> *parentalControls

  // class methods
  0x00100017c67 +(id)logHandle

  // instance methods
  0x00100035028 -(void)autoLoginAccount:(id)arg1 messageContext:(SEL)arg2 
  0x001000355d0 -(void)autoReconnectAccount:(id)arg1 messageContext:(SEL)arg2 
  0x00100035b78 -(void)loginAccount:(id)arg1 messageContext:(SEL)arg2 
  0x00100036120 -(void)logoutAccount:(id)arg1 messageContext:(SEL)arg2 
  0x001000366c8 -(void)holdBuddyUpdatesAccount:(id)arg1 messageContext:(SEL)arg2 
  0x00100036c59 -(void)resumeBuddyUpdatesAccount:(id)arg1 messageContext:(SEL)arg2 
  0x001000371ea -(void)authenticateAccount:(id)arg1 messageContext:(SEL)arg2 
  0x00100037787 -(void)registerAccount:(id)arg1 messageContext:(SEL)arg2 
  0x00100037d24 -(void)unregisterAccount:(id)arg1 messageContext:(SEL)arg2 
  0x001000382c1 -(void)requestGroupsAccount:(id)arg1 messageContext:(SEL)arg2 
  0x00100038852 -(void)changeGroups:(id)arg1 account:(SEL)arg2 messageContext:(id)arg3 
  0x00100038e05 -(void)changeGroup:(id)arg1 changes:(SEL)arg2 account:(id)arg3 messageContext:(id)arg4 
  0x001000393c9 -(void)renameGroup:(id)arg1 to:(SEL)arg2 account:(id)arg3 messageContext:(id)arg4 
  0x0010003998d -(void)acceptSubscriptionRequest:(id)arg1 from:(SEL)arg2 account:(BOOL)arg3 messageContext:(id)arg4 
  0x00100039f50 -(void)requestSubscriptionTo:(id)arg1 account:(SEL)arg2 messageContext:(id)arg3 
  0x0010003a503 -(void)startWatchingBuddy:(id)arg1 account:(SEL)arg2 messageContext:(id)arg3 
  0x0010003aa97 -(void)stopWatchingBuddy:(id)arg1 account:(SEL)arg2 messageContext:(id)arg3 
  0x0010003b02b -(void)requestProperty:(id)arg1 ofPerson:(SEL)arg2 account:(id)arg3 messageContext:(id)arg4 
  0x0010003b5e4 -(void)setValue:(id)arg1 ofProperty:(SEL)arg2 ofPerson:(id)arg3 account:(id)arg4 messageContext:(id)arg5 
  0x0010003bb83 -(void)updateAuthorizationCredentials:(id)arg1 token:(SEL)arg2 account:(id)arg3 messageContext:(id)arg4 
  0x0010003c13f -(void)joinChatID:(id)arg1 handleInfo:(SEL)arg2 identifier:(id)arg3 style:(id)arg4 groupID:(id)arg5 lastAddressedHandle:(unsigned char)arg6 lastAddressedSIMID:(id)arg7 joinProperties:(id)arg8 account:(id)arg9 messageContext:(id)arg10 
  0x0010003c72e -(void)leaveChatID:(id)arg1 identifier:(SEL)arg2 style:(id)arg3 account:(id)arg4 messageContext:(unsigned char)arg5 
  0x0010003ccec -(void)leaveiMessageChatID:(id)arg1 identifier:(SEL)arg2 style:(id)arg3 account:(id)arg4 messageContext:(unsigned char)arg5 
  0x0010003d2aa -(void)removeChatID:(id)arg1 identifier:(SEL)arg2 style:(id)arg3 account:(id)arg4 messageContext:(unsigned char)arg5 
  0x0010003d868 -(void)invitePersonInfo:(id)arg1 withMessage:(SEL)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(id)arg5 account:(id)arg6 messageContext:(unsigned char)arg7 
  0x0010003de2c -(void)invitePersonInfoToiMessageChat:(id)arg1 withMessage:(SEL)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(id)arg5 account:(id)arg6 messageContext:(unsigned char)arg7 
  0x0010003e3f0 -(void)sendGroupPhotoUpdate:(id)arg1 toChatID:(SEL)arg2 identifier:(id)arg3 style:(id)arg4 account:(id)arg5 messageContext:(unsigned char)arg6 
  0x0010003e9bf -(void)retryGroupPhotoUpload:(id)arg1 toChatID:(SEL)arg2 identifier:(id)arg3 style:(id)arg4 account:(id)arg5 messageContext:(unsigned char)arg6 
  0x0010003ef8e -(void)removePersonInfo:(id)arg1 chatID:(SEL)arg2 identifier:(id)arg3 style:(id)arg4 account:(id)arg5 messageContext:(unsigned char)arg6 
  0x0010003f556 -(void)removePersonInfoFromiMessageChat:(id)arg1 chatID:(SEL)arg2 identifier:(id)arg3 style:(id)arg4 account:(id)arg5 messageContext:(unsigned char)arg6 
  0x0010003fb1e -(void)declineInvitationToChatID:(id)arg1 identifier:(SEL)arg2 style:(id)arg3 account:(id)arg4 messageContext:(unsigned char)arg5 
  0x001000400dc -(void)eagerUploadTransfer:(id)arg1 recipients:(SEL)arg2 messageContext:(id)arg3 
  0x001000402cf -(void)eagerUploadCancel:(id)arg1 messageContext:(SEL)arg2 
  0x001000404ba -(void)sendMessage:(id)arg1 toChatID:(SEL)arg2 identifier:(id)arg3 style:(id)arg4 account:(id)arg5 messageContext:(unsigned char)arg6 
  0x00100040aa0 -(void)sendStickerAtPath:(id)arg1 toChatID:(SEL)arg2 forNBubbleFromTheBottom:(id)arg3 atX:(id)arg4 atY:(unsigned long)arg5 scale:(id)arg6 balloonWidth:(id)arg7 messageContext:(id)arg8 
  0x001000410ac -(void)sendReadReceiptForMessage:(id)arg1 toChatID:(SEL)arg2 identifier:(id)arg3 style:(id)arg4 account:(id)arg5 messageContext:(unsigned char)arg6 
  0x0010004166a -(void)sendPlayedReceiptForMessage:(id)arg1 toChatID:(SEL)arg2 identifier:(id)arg3 style:(id)arg4 account:(id)arg5 messageContext:(unsigned char)arg6 
  0x00100041c28 -(void)sendSavedReceiptForMessage:(id)arg1 toChatID:(SEL)arg2 identifier:(id)arg3 style:(id)arg4 account:(id)arg5 messageContext:(unsigned char)arg6 
  0x001000421e6 -(void)_automation_sendDictionary:(id)arg1 options:(SEL)arg2 toHandles:(id)arg3 messageContext:(id)arg4 
  0x00100042589 -(void)sendBalloonPayload:(id)arg1 attachments:(SEL)arg2 withMessageGUID:(id)arg3 bundleID:(id)arg4 messageContext:(id)arg5 
  0x00100042944 -(void)updateBalloonPayload:(id)arg1 attachments:(SEL)arg2 forMessageGUID:(id)arg3 messageContext:(id)arg4 
  0x00100042ce7 -(void)setProperties:(id)arg1 ofParticipant:(SEL)arg2 inChatID:(id)arg3 identifier:(id)arg4 style:(id)arg5 account:(id)arg6 messageContext:(unsigned char)arg7 
  0x001000432a1 -(void)setBlockingMode:(id)arg1 account:(SEL)arg2 messageContext:(unsigned int)arg3 
  0x00100043852 -(void)setAllowList:(id)arg1 account:(SEL)arg2 messageContext:(id)arg3 
  0x00100043e05 -(void)setBlockList:(id)arg1 account:(SEL)arg2 messageContext:(id)arg3 
  0x001000443b8 -(void)setBlockIdleStatus:(id)arg1 account:(SEL)arg2 messageContext:(BOOL)arg3 
  0x0010004496a -(void)passwordUpdatedAccount:(id)arg1 messageContext:(SEL)arg2 
  0x00100044f07 -(void)sendCommand:(id)arg1 withProperties:(SEL)arg2 toPerson:(id)arg3 account:(id)arg4 toChatID:(id)arg5 identifier:(id)arg6 style:(id)arg7 messageContext:(id)arg8 
  0x001000454e2 -(void)sendCommand:(id)arg1 withProperties:(SEL)arg2 toPerson:(id)arg3 account:(id)arg4 messageContext:(id)arg5 
  0x00100045a9f -(void)requestVCWithPerson:(id)arg1 properties:(SEL)arg2 conference:(id)arg3 account:(id)arg4 messageContext:(id)arg5 
  0x00100046076 -(void)respondToVCInvitationWithPerson:(id)arg1 properties:(SEL)arg2 conference:(id)arg3 account:(id)arg4 messageContext:(id)arg5 
  0x0010004664d -(void)cancelVCRequestWithPerson:(id)arg1 properties:(SEL)arg2 conference:(id)arg3 account:(id)arg4 messageContext:(id)arg5 
  0x0010004666e -(void)cancelVCRequestWithPerson:(id)arg1 properties:(SEL)arg2 conference:(id)arg3 reason:(id)arg4 account:(id)arg5 messageContext:(id)arg6 
  0x00100046c31 -(void)sendCounterProposalToPerson:(id)arg1 properties:(SEL)arg2 conference:(id)arg3 account:(id)arg4 messageContext:(id)arg5 
  0x00100047208 -(void)sendVCUpdate:(id)arg1 toPerson:(SEL)arg2 conference:(id)arg3 account:(id)arg4 messageContext:(id)arg5 
  0x001000477df -(void)sendAVMessageToPerson:(id)arg1 sessionID:(SEL)arg2 type:(id)arg3 userInfo:(unsigned int)arg4 conference:(unsigned int)arg5 account:(id)arg6 messageContext:(id)arg7 
  0x00100047da8 -(void)relay:(id)arg1 sendInitateRequest:(SEL)arg2 toPerson:(id)arg3 account:(id)arg4 messageContext:(id)arg5 
  0x0010004837f -(void)relay:(id)arg1 sendUpdate:(SEL)arg2 toPerson:(id)arg3 account:(id)arg4 messageContext:(id)arg5 
  0x00100048956 -(void)relay:(id)arg1 sendCancel:(SEL)arg2 toPerson:(id)arg3 account:(id)arg4 messageContext:(id)arg5 
  0x00100048f2d -(void)addAliases:(id)arg1 account:(SEL)arg2 messageContext:(id)arg3 
  0x001000494db -(void)removeAliases:(id)arg1 account:(SEL)arg2 messageContext:(id)arg3 
  0x00100049a89 -(void)validateAliases:(id)arg1 account:(SEL)arg2 messageContext:(id)arg3 
  0x0010004a037 -(void)unvalidateAliases:(id)arg1 account:(SEL)arg2 messageContext:(id)arg3 
  0x0010004a5e5 -(void)validateProfileAccount:(id)arg1 messageContext:(SEL)arg2 
  0x0010004ab82 -(void)sendMappingPacket:(id)arg1 toHandle:(SEL)arg2 account:(id)arg3 messageContext:(id)arg4 
  0x0010004ae85 -(void)enrollDeviceForSMSRelay:(id)arg1 account:(SEL)arg2 messageContext:(id)arg3 
  0x0010004b438 -(void)unEnrollDeviceForSMSRelay:(id)arg1 account:(SEL)arg2 messageContext:(id)arg3 
  0x0010004b9eb -(void)enrollSelfDeviceForSMSRelay:(id)arg1 messageContext:(SEL)arg2 
  0x0010004bf93 -(void)closeSessionChatID:(id)arg1 identifier:(SEL)arg2 style:(id)arg3 account:(id)arg4 messageContext:(unsigned char)arg5 
  0x00100030c3a -(long long)_batchIndexingIntervalBagValue
  0x00100030c50 -(id)spotlightIndexQueue
  0x00100030c86 -(void)registerForCoreSpotlightIndexing
  0x0010003177f -(void)registerForCoreSpotlightMigration
  0x001000319d1 -(id)_newSpotlightBatchIndexingXPCCriteria
  0x00100031a9c -(void)_indexNextBatchIfNecessaryForActivity:(id)arg1 
  0x00100032645 -(BOOL)_deviceConditionsAllowsSpotlightIndexingForActivity:(id)arg1 
  0x001000329a9 -(BOOL)_needsReindexingDueToVersionMismatch
  0x00100032bdd -(long long)_currentSpotlightVersion
  0x00100032bf6 -(long long)_expectedSpotlightVersion
  0x00100032c0f -(id)_currentProductVersion
  0x00100032c28 -(id)_expectedProductVersion
  0x00100032c41 -(BOOL)_needsDeferredIndexing
  0x00100032c5a -(void)_checkSpotlightClientStateForReindexIfNeeded
  0x00100033186 -(void)_checkSpotlightIndexCountForReindexIfNeeded
  0x00100033c1e -(BOOL)_shouldDeferXPCActivity:(id)arg1 
  0x00100033c2f -(BOOL)_deferXPCActivity:(id)arg1 
  0x0010002af0b -(BOOL)hasMessagesListener
  0x0010002af78 -(BOOL)hasListeners
  0x0010002afde -(BOOL)hasChatListeners
  0x0010002aff9 -(BOOL)hasStatusManagingListeners
  0x0010002b014 -(BOOL)launchListenerForCapability:(id)arg1 
  0x0010002bfe9 -(void)_removeListener:(id)arg1 
  0x0010002c929 -(void)_removeListenerObject:(id)arg1 
  0x0010002cb1d -(void)_removeLocalListenerObject:(id)arg1 
  0x0010002cd10 -(void)removeListenerObject:(id)arg1 
  0x0010002ce08 -(void)removeLocalListenerObject:(id)arg1 
  0x0010002ce9d -(void)setListenerCapabilities:(id)arg1 messageContext:(SEL)arg2 
  0x0010002d404 -(void)postSetupToAllListeners
  0x0010002d600 -(id)listenerWithName:(id)arg1 
  0x0010002d7d3 -(void)removeListener:(id)arg1 
  0x0010002d912 -(void)remoteObjectDiedNotification:(id)arg1 
  0x0010002da46 -(void)localObjectDiedNotification:(id)arg1 
  0x0010002db7a -(id)_setupInfoForListener:(id)arg1 withContext:(SEL)arg2 
  0x0010002ec75 -(BOOL)_setupListenerConnection:(id)arg1 listenerID:(SEL)arg2 pid:(id)arg3 setupInfo:(id)arg4 setupResponse:(int)arg5 
  0x0010002f6e5 -(BOOL)_setupPlugInListenerConnection:(id)arg1 listenerID:(SEL)arg2 pid:(id)arg3 setupInfo:(id)arg4 setupResponse:(int)arg5 
  0x0010002f6ed -(void)_postSetupToListener:(id)arg1 withContext:(SEL)arg2 messageContext:(id)arg3 
  0x0010002f917 -(BOOL)daemonInterface:(id)arg1 shouldGrantAccessForPID:(SEL)arg2 auditToken:(id)arg3 portName:(int)arg4 listenerConnection:({?=[8I]})arg5 setupInfo:(id)arg6 setupResponse:(id)arg7 
  0x0010002fc14 -(BOOL)daemonInterface:(id)arg1 shouldGrantPlugInAccessForPID:(SEL)arg2 auditToken:(id)arg3 portName:(int)arg4 listenerConnection:({?=[8I]})arg5 setupInfo:(id)arg6 setupResponse:(id)arg7 
  0x0010002fe90 -(void)_pidSuspended:(id)arg1 
  0x0010003030c -(void)_unsuspendListenerIfNeeded:(id)arg1 
  0x001000304bf -(id)listenerIDForLocalObject:(id)arg1 requireCapability:(SEL)arg2 foundIndex:(id)arg3 
  0x001000309fc -(long long)_getListenerCapTruncatedChatCountWithCaps:(id)arg1 
  0x0010002a1b3 -(void)autoLoginActiveAccountsIfNecessaryWithMessageContext:(id)arg1 
  0x0010002a2ed -(void)loginAllAccountsWithMessageContext:(id)arg1 
  0x0010002a427 -(void)logoutAllAccountsWithMessageContext:(id)arg1 
  0x0010002a561 -(void)addAccount:(id)arg1 defaults:(SEL)arg2 service:(id)arg3 messageContext:(id)arg4 
  0x0010002a675 -(void)removeAccount:(id)arg1 messageContext:(SEL)arg2 
  0x0010002a82a -(void)activateAccounts:(id)arg1 messageContext:(SEL)arg2 
  0x0010002a9b7 -(void)deactivateAccounts:(id)arg1 messageContext:(SEL)arg2 
  0x0010002ab44 -(void)writeAccount:(id)arg1 defaults:(SEL)arg2 messageContext:(id)arg3 
  0x0010002abef -(void)requestBuddyPicturesAndPropertiesForAccount:(id)arg1 messageContext:(SEL)arg2 
  0x0010002addf -(void)requestNetworkDataAvailability
  0x00100029060 -(BOOL)shouldLaunchTextAppForInvocation:(id)arg1 shouldDumpInvocation:(SEL)arg2 
  0x00100029a00 -(BOOL)shouldLaunchVCAppForInvocation:(id)arg1 shouldDumpInvocation:(SEL)arg2 
  0x00100029b08 -(unsigned long)queue:(id)arg1 optionsForInvocation:(SEL)arg2 
  0x00100029de5 -(BOOL)queue:(id)arg1 shouldInvoke:(SEL)arg2 
  0x001000276fe -(id)_invocationQueueForCapability:(id)arg1 create:(SEL)arg2 
  0x001000278b0 -(void)emptyBroadcasterInvocationQueue:(id)arg1 forCapability:(SEL)arg2 messageContext:(BOOL)arg3 
  0x001000279c1 -(void)emptyBroadcasterInvocationQueues:(id)arg1 messageContext:(SEL)arg2 
  0x00100027b91 -(BOOL)shouldQueueBroadcasterInvocationsForCapability:(id)arg1 
  0x00100027bf1 -(BOOL)_allowInvocationQueuesForListenerCapability:(id)arg1 
  0x00100027c29 -(BOOL)_alwaysUseInvocationQueuesForListenerCapability:(id)arg1 
  0x00100027c3e -(id)_listenersWithCapabilities:(id)arg1 allowedListenerIDs:(SEL)arg2 forService:(unsigned int)arg3 
  0x0010002802f -(id)broadcasterForPaginatedChatRegistryListenersWithMessageContext:(id)arg1 
  0x0010002804d -(id)broadcasterForChatListenersWithMessageContext:(id)arg1 isBlackholed:(SEL)arg2 
  0x0010002807a -(id)broadcasterForChatDatabaseListenersWithMessageContext:(id)arg1 
  0x00100028163 -(id)broadcasterWithMessageContext:(id)arg1 
  0x001000281e0 -(id)broadcasterForTarget:(id)arg1 messageContext:(SEL)arg2 
  0x00100028258 -(BOOL)haveAnyListenersWithID:(id)arg1 
  0x001000283ce -(BOOL)haveAnyListenersWithCap:(id)arg1 
  0x00100028540 -(id)broadcasterForAVInvitationListenersWithMessageContext:(id)arg1 
  0x00100028692 -(id)broadcasterForAVConferenceListenersWithMessageContext:(id)arg1 
  0x001000286b0 -(id)broadcasterForACConferenceListenersWithMessageContext:(id)arg1 
  0x001000286ce -(id)_broadcasterForListenersWithCapabilities:(id)arg1 messageContext:(SEL)arg2 
  0x00100028880 -(id)broadcasterForListenersWithCapabilities:(id)arg1 messageContext:(SEL)arg2 
  0x00100028a49 -(id)broadcasterForService:(id)arg1 messageContext:(SEL)arg2 
  0x00100028b17 -(id)broadcasterWithID:(id)arg1 forService:(SEL)arg2 messageContext:(id)arg3 
  0x00100028bc2 -(id)broadcasterWithID:(id)arg1 messageContext:(SEL)arg2 
  0x00100028bd9 -(id)broadcasterForTarget:(id)arg1 forService:(SEL)arg2 messageContext:(id)arg3 
  0x00100028bee -(id)broadcasterForListenersWithCapabilities:(id)arg1 forService:(SEL)arg2 messageContext:(unsigned int)arg3 
  0x001000260ca -(BOOL)shouldBlockMic
  0x00100026106 -(BOOL)shouldBlockCamera
  0x00100026142 -(BOOL)shouldBlockARD
  0x0010002617e -(void)setVCCapabilities:(id)arg1 messageContext:(SEL)arg2 
  0x00100026780 -(BOOL)_conferencingAvailable
  0x00100026b1c -(BOOL)conferencingActive
  0x00100026eba -(unsigned long)_vcCapabilities
  0x00100027053 -(unsigned long)vcCapabilitiesForListenerID:(id)arg1 
  0x0010002721f -(unsigned long)vcCapabilities
  0x00100027357 -(void)requestPendingVCInvitesWithMessageContext:(id)arg1 
  0x00100027471 -(void)requestPendingACInvitesWithMessageContext:(id)arg1 
  0x00100027535 -(void)account:(id)arg1 avAction:(SEL)arg2 withArguments:(id)arg3 toAVChat:(unsigned int)arg4 isVideo:(id)arg5 messageContext:(id)arg6 
  0x0010002760a -(void)_clearPending
  0x0010002767d -(void)clearPendingVCRequestsWithPerson:(id)arg1 forAccount:(SEL)arg2 messageContext:(id)arg3 
  0x001000276f8 -(void)conference:(id)arg1 account:(SEL)arg2 notifyInvitationCancelledFromPerson:(id)arg3 messageContext:(id)arg4 
  0x001000257e6 -(void)fetchNicknamesWithMessageContext:(id)arg1 
  0x0010002587a -(void)fetchHandleSharingStateWithMessageContext:(id)arg1 
  0x0010002590e -(void)clearPendingNicknameUpdatesForHandleIDs:(id)arg1 messageContext:(SEL)arg2 
  0x00100025a56 -(void)ignorePendingNicknameUpdatesForHandleIDs:(id)arg1 messageContext:(SEL)arg2 
  0x00100025b9e -(void)whitelistHandleIDsForNicknameSharing:(id)arg1 onChatGUIDs:(SEL)arg2 messageContext:(id)arg3 
  0x00100025be5 -(void)blacklistHandleIDsForNicknameSharing:(id)arg1 messageContext:(SEL)arg2 
  0x00100025c1d -(void)nicknamePreferencesDidChangeWithMessageContext:(id)arg1 
  0x00100025c4f -(void)setNewPersonalNickname:(id)arg1 messageContext:(SEL)arg2 
  0x00100025c94 -(void)fetchPersonalNicknameWithMessageContext:(id)arg1 
  0x00100025cfe -(void)userNicknameForRecordID:(id)arg1 decryptionKey:(SEL)arg2 requestID:(id)arg3 messageContext:(id)arg4 
  0x00100026098 -(void)markAllNicknamesAsPendingWithMessageContext:(id)arg1 
  0x001000207cd -(void)updateUnformattedID:(id)arg1 forBuddyID:(SEL)arg2 onService:(id)arg3 messageContext:(id)arg4 
  0x00100020ae2 -(void)loadMessageWithGUID:(id)arg1 queryID:(SEL)arg2 messageContext:(id)arg3 
  0x00100020eaa -(void)loadMessageItemWithGUID:(id)arg1 queryID:(SEL)arg2 messageContext:(id)arg3 
  0x001000212c0 -(void)loadChatsWithChatID:(id)arg1 messageContext:(SEL)arg2 
  0x00100021380 -(void)loadHistoryForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 limit:(unsigned char)arg4 beforeGUID:(id)arg5 afterGUID:(unsigned long)arg6 threadIdentifier:(id)arg7 chatID:(id)arg8 queryID:(id)arg9 messageContext:(id)arg10 
  0x00100021f6b -(void)loadPagedHistoryForGUID:(id)arg1 chatIdentifiers:(SEL)arg2 style:(id)arg3 onServices:(id)arg4 numberOfMessagesBefore:(unsigned char)arg5 numberOfMessagesAfter:(id)arg6 threadIdentifier:(unsigned long)arg7 chatID:(unsigned long)arg8 queryID:(id)arg9 messageContext:(id)arg10 
  0x00100022658 -(void)_fastSizeAttachmentsForIMMessageItemsIfNecessary:(id)arg1 
  0x0010002265e -(void)loadAttachmentsForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 chatID:(unsigned char)arg4 queryID:(id)arg5 messageContext:(id)arg6 
  0x00100022d0a -(void)deleteMessageWithGUIDs:(id)arg1 queryID:(SEL)arg2 messageContext:(id)arg3 
  0x001000230fc -(void)clearHistoryForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 beforeGUID:(unsigned char)arg4 afterGUID:(id)arg5 chatID:(id)arg6 queryID:(id)arg7 messageContext:(id)arg8 
  0x00100023b04 -(id)chatRegistry
  0x00100023b1d -(void)markAsSpamForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 chatID:(unsigned char)arg4 queryID:(id)arg5 autoReport:(id)arg6 messageContext:(id)arg7 
  0x00100023e03 -(void)cleanupAttachmentsWithMessageContext:(id)arg1 
  0x00100023f96 -(void)loadFrequentRepliesForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 limit:(unsigned char)arg4 chatID:(id)arg5 queryID:(unsigned long)arg6 messageContext:(id)arg7 
  0x00100024591 -(void)loadUnreadForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 limit:(unsigned char)arg4 fallbackGUID:(id)arg5 chatId:(unsigned long)arg6 queryID:(id)arg7 messageContext:(id)arg8 
  0x00100024da2 -(void)_populateParentMessagesIfNeeded:(id)arg1 
  0x0010002577e -(void)fetchInternalPhishingBlacklist
  0x001000257b2 -(void)loadInternalPhishingBlacklist
  0x00100017cb3 -(id)logHandle
  0x00100017ccd -(void)logDumpAndSendMessageTo:(id)arg1 forHours:(SEL)arg2 messageContext:(id)arg3 
  0x00100017d1b -(void)createChatZoneWithMessageContext:(id)arg1 
  0x00100017f7a -(void)writeDirtyChatsWithMessageContext:(id)arg1 
  0x0010001804d -(void)deleteChatZoneWithMessageContext:(id)arg1 
  0x00100018146 -(void)fetchAccountStatusAndUpdateMiCSwitchEligibilityWithMessageContext:(id)arg1 
  0x0010001823f -(void)syncChatsWithMessageContext:(id)arg1 
  0x00100018275 -(void)markAllChatsAsDirtyWithMessageContext:(id)arg1 
  0x00100018464 -(void)clearChatZoneSyncTokenWithMessageContext:(id)arg1 
  0x0010001855d -(void)createAttachmentZoneWithMessageContext:(id)arg1 
  0x001000187bc -(void)deleteAttachmentZoneWithMessageContext:(id)arg1 
  0x001000188b5 -(void)writeAttachmentsWithMessageContext:(id)arg1 
  0x001000189bb -(void)syncAttachmentsWithMessageContext:(id)arg1 
  0x00100018abe -(void)downloadAttachmentAssetsWithMessageContext:(id)arg1 
  0x00100018bc4 -(void)writeDirtyMessagesWithMessageContext:(id)arg1 
  0x00100018cca -(void)deleteMessagesZoneWithMessageContext:(id)arg1 
  0x00100018dc3 -(void)syncMessagesWithMessageContext:(id)arg1 
  0x00100018ec9 -(void)writeExitRecordWithMessageContext:(id)arg1 
  0x00100019170 -(void)fetchExitRecordWithMessageContext:(id)arg1 
  0x00100019396 -(void)deleteExitRecordWithMessageContext:(id)arg1 
  0x0010001961d -(void)kickOffCloudKitSyncIfNeededOnImagentLaunch
  0x0010001964f -(void)_fetchRampStateIfNeededWithCompletion:(id)arg1 
  0x0010001992e -(void)initiatePeriodicSyncWithMessageContext:(id)arg1 
  0x00100019a61 -(void)loadDirtyMessagesWithLimit:(id)arg1 messageContext:(SEL)arg2 
  0x00100019aa0 -(void)loadDeletedMessagesWithLimit:(id)arg1 messageContext:(SEL)arg2 
  0x00100019bdd -(void)_clearLocalCloudKitSyncState:(id)arg1 
  0x00100019d95 -(void)clearLocalCloudKitSyncStateWithMessageContext:(id)arg1 
  0x00100019ddc -(void)sendRestoreFailuresLogDumpsWithMessageContext:(id)arg1 
  0x00100019e0e -(void)clearDataFromCloudKitWithMessageContext:(id)arg1 
  0x00100019ed9 -(void)performAdditionalStorageRequiredCheckWithMessageContext:(id)arg1 
  0x0010001a367 -(void)didAttemptToSetEnabledTo:(id)arg1 result:(SEL)arg2 
  0x0010001a55d -(void)setCloudKitEnabled:(id)arg1 messageContext:(SEL)arg2 
  0x0010001aca9 -(void)tryToDisableAllDevicesWithMessageContext:(id)arg1 
  0x0010001ad54 -(void)initiateSyncWithMessageContext:(id)arg1 
  0x0010001ad86 -(void)broadcastCloudKitState
  0x0010001ae7f -(void)broadcastCloudKitStateAfterFetchingAccountStatus
  0x0010001af78 -(void)broadcastCloudKitStateAfterClearingErrors
  0x0010001b071 -(void)uploadDailyAnalyticstoCloudKit
  0x0010001b2f6 -(void)clearAnalyticDefaultsAndLocalSyncState
  0x0010001b3ef -(long long)_chatSyncingIntervalBagValue
  0x0010001b405 -(long long)_attachmentFileSizeUpdateIntervalBagValue
  0x0010001b41b -(long long)_metricsLoggingUpdateIntervalBagValue
  0x0010001b431 -(long long)_messageSyncingIntervalBagValue
  0x0010001b44c -(long long)_messageSyncingDelayBagValue
  0x0010001b467 -(void)_registerForAttachmentFileSizeUpdate
  0x0010001b53a -(void)_registerForChatSyncing
  0x0010001bbc1 -(void)_registerForMessageSyncing
  0x0010001c45a -(void)_registerForMetricsLogging
  0x0010001ca14 -(void)_registerForAutoLogDump
  0x0010001d000 -(void)systemRestoreStateDidChange
  0x0010001d0d3 -(void)registerForCloudKitSyncing
  0x0010001d223 -(void)fetchLatestSaltWithMessageContext:(id)arg1 
  0x0010001d257 -(void)printCachedSaltWithMessageContext:(id)arg1 
  0x0010001d3ca -(void)fetchLatestRampStateWithMessageContext:(id)arg1 
  0x0010001d6bf -(id)rampStateDictionaryFromState:(id)arg1 featureAllowed:(SEL)arg2 fetchPromoted:(BOOL)arg3 featureVisible:(BOOL)arg4 featureHadServerError:(BOOL)arg5 
  0x0010001d7da -(void)printCachedRampStateWithMessageContext:(id)arg1 
  0x0010001d9fd -(void)syncDeletesToCloudKitWithMessageContext:(id)arg1 
  0x0010001db03 -(void)deleteSaltWithMessageContext:(id)arg1 
  0x0010001dbfc -(void)metricAttachments:(id)arg1 messageContext:(SEL)arg2 
  0x0010001dd30 -(void)purgeAttachments:(id)arg1 messageContext:(SEL)arg2 
  0x0010001df72 -(void)updateAttachmentFileSizesWithMessageContext:(id)arg1 
  0x0010001e06d -(void)fetchSyncStateStatisticsWithMessageContext:(id)arg1 
  0x0010001e0e9 -(void)writeCloudKitSyncCounts:(id)arg1 messageContext:(SEL)arg2 
  0x0010001e289 -(void)reportMetricToCK:(id)arg1 withDict:(SEL)arg2 messageContext:(id)arg3 
  0x0010001e3dd -(void)fetchCloudKitSyncStateDebuggingInfo:(id)arg1 messageContext:(SEL)arg2 
  0x0010001e54a -(void)tryToAutoCollectLogsWithErrorString:(id)arg1 sendLogsTo:(SEL)arg2 messageContext:(id)arg3 
  0x0010001e6a1 -(void)downloadPurgedAttachmentsForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 chatID:(unsigned char)arg4 messageContext:(id)arg5 
  0x0010001ea5f -(BOOL)_shouldContinueDownloadingPurgedAttachments:(id)arg1 
  0x0010001ec4b -(void)_downloadPurgedAttachmentsForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 chatID:(unsigned char)arg4 retryCount:(id)arg5 messageContext:(id)arg6 
  0x0010001fbc4 -(unsigned long)loadUncachedAttachmentCountForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 chatID:(unsigned char)arg4 queryID:(id)arg5 messageContext:(id)arg6 
  0x0010002020d -(void)loadIsDownloadingPurgedAttachmentsForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 chatID:(unsigned char)arg4 queryID:(id)arg5 messageContext:(id)arg6 
  0x0010002056d -(id)_stringForChatIDs:(id)arg1 onServices:(SEL)arg2 
  0x0010001773c -(void)replayMessagesFromDatabasePath:(id)arg1 
  0x001000179c5 -(void)beginRecordingMessagesToReplayDatabase:(id)arg1 
  0x00100017a20 -(void)stopRecordingMessagesReplayDatabase
  0x00100017a6c -(void)_automation_receiveDictionary:(id)arg1 fromID:(SEL)arg2 
  0x001000175a6 -(void)sendNotificationMessageToUniqueID:(id)arg1 withCommand:(SEL)arg2 messageContext:(id)arg3 
  0x00100016197 -(void)deleteFileTransferWithGUID:(id)arg1 messageContext:(SEL)arg2 
  0x00100016347 -(void)sendStandaloneFileTransfer:(id)arg1 messageContext:(SEL)arg2 
  0x001000164a8 -(void)fileTransfer:(id)arg1 createdWithProperties:(SEL)arg2 messageContext:(id)arg3 
  0x00100016787 -(void)fileTransfer:(id)arg1 updatedWithProperties:(SEL)arg2 messageContext:(id)arg3 
  0x001000168f3 -(void)fileTransfer:(id)arg1 acceptedWithPath:(SEL)arg2 autoRename:(id)arg3 overwrite:(id)arg4 messageContext:(BOOL)arg5 
  0x00100016a78 -(void)fileTransferStopped:(id)arg1 messageContext:(SEL)arg2 
  0x00100016bd9 -(void)fileTransferRemoved:(id)arg1 messageContext:(SEL)arg2 
  0x00100016d3a -(BOOL)markAttachment:(id)arg1 sender:(SEL)arg2 recipients:(id)arg3 isIncoming:(id)arg4 
  0x00100016d95 -(void)downloadStickerWithGUID:(id)arg1 messageContext:(SEL)arg2 
  0x00100016ef2 -(void)downloadStickerPackWithGUID:(id)arg1 isIncomingMessage:(SEL)arg2 ignoreCache:(id)arg3 messageContext:(BOOL)arg4 
  0x0010001704f -(void)_setupHighQualityFileTransferVariantNotificationListeners
  0x001000170b9 -(void)downloadHighQualityVariantOfFileTransferWithGUID:(id)arg1 
  0x00100017237 -(void)_handleHighQualityDownloadCompletedNotification:(id)arg1 
  0x00100017542 -(void)preWarmWithMessageContext:(id)arg1 
  0x0010000ae1c -(id)_messageStore
  0x0010000ae35 -(void)storeItem:(id)arg1 inChatGUID:(SEL)arg2 messageContext:(id)arg3 
  0x0010000b9f7 -(void)markMessageAsCorrupt:(id)arg1 setCorrupt:(SEL)arg2 messageContext:(id)arg3 
  0x0010000bead -(void)markReadForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 messages:(unsigned char)arg4 clientUnreadCount:(id)arg5 messageContext:(id)arg6 
  0x0010000bed0 -(void)markReadForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 messages:(unsigned char)arg4 clientUnreadCount:(id)arg5 setUnreadCountToZero:(id)arg6 messageContext:(unsigned long)arg7 
  0x0010000c191 -(void)markReadForMessageGUID:(id)arg1 callerOrigin:(SEL)arg2 messageContext:(id)arg3 
  0x0010000dede -(void)markReadForMessageGUID:(id)arg1 messageContext:(SEL)arg2 
  0x0010000e012 -(void)_automation_markMessagesAsRead:(id)arg1 messageGUID:(SEL)arg2 forChatGUID:(BOOL)arg3 fromMe:(id)arg4 queryID:(id)arg5 messageContext:(BOOL)arg6 
  0x0010000e3d0 -(void)playSendSoundForMessageGUID:(id)arg1 callerOrigin:(SEL)arg2 
  0x0010000e635 -(void)markPlayedForMessageGUID:(id)arg1 messageContext:(SEL)arg2 
  0x0010000eb23 -(void)markPlayedExpressiveSendForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 message:(unsigned char)arg4 messageContext:(id)arg5 
  0x0010000f108 -(void)markPlayedForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 message:(unsigned char)arg4 messageContext:(id)arg5 
  0x001000100b2 -(void)markSavedForMessageGUID:(id)arg1 messageContext:(SEL)arg2 
  0x001000105b0 -(void)markSavedForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 message:(unsigned char)arg4 messageContext:(id)arg5 
  0x00100011360 -(void)markHasHadSuccessfulQueryForIDs:(id)arg1 style:(SEL)arg2 onServices:(id)arg3 messageContext:(unsigned char)arg4 
  0x00100011a32 -(void)removeChat:(id)arg1 messageContext:(SEL)arg2 
  0x00100011fc2 -(void)archiveChat:(id)arg1 messageContext:(SEL)arg2 
  0x00100012367 -(void)chat:(id)arg1 updateDisplayName:(SEL)arg2 messageContext:(id)arg3 
  0x0010001260b -(void)chat:(id)arg1 updateIsFiltered:(SEL)arg2 messageContext:(id)arg3 
  0x001000128b6 -(void)chat:(id)arg1 updateIsBlackholed:(SEL)arg2 messageContext:(id)arg3 
  0x00100012ba8 -(void)chat:(id)arg1 updateProperties:(SEL)arg2 messageContext:(id)arg3 
  0x00100012de6 -(void)chat:(id)arg1 updateLastAddressHandle:(SEL)arg2 messageContext:(id)arg3 
  0x00100012ff6 -(void)chat:(id)arg1 updateLastAddressedSIMID:(SEL)arg2 messageContext:(id)arg3 
  0x00100013206 -(void)silenceChat:(id)arg1 untilDate:(SEL)arg2 messageContext:(id)arg3 
  0x00100013489 -(void)updateMessage:(id)arg1 messageContext:(SEL)arg2 
  0x00100013629 -(void)_updateMessage:(id)arg1 messageContext:(SEL)arg2 
  0x001000138d4 -(void)updateMessage:(id)arg1 withIndexesOfDeletedItems:(SEL)arg2 withIndexToRangeMapOfDeletedItems:(id)arg3 messageContext:(id)arg4 
  0x00100013e82 -(void)_removeAndDeleteFileTransferWithGUID:(id)arg1 
  0x00100013f0e -(void)requestPendingMessagesWithMessageContext:(id)arg1 
  0x00100014151 -(void)loadChatWithChatIdentifier:(id)arg1 messageContext:(SEL)arg2 
  0x00100014734 -(void)unblackholeAndLoadChatWithHandleIDs:(id)arg1 messageContext:(SEL)arg2 
  0x00100015017 -(void)debugUpdateGroupParticipantversion:(id)arg1 chatIdentifier:(SEL)arg2 messageContext:(unsigned long)arg3 
  0x0010001554f -(void)requestOneTimeCodeStatusWithMessageContext:(id)arg1 
  0x00100015648 -(void)consumeCodeWithMessageGUID:(id)arg1 messageContext:(SEL)arg2 
  0x001000157c5 -(void)simulateOneTimeCodeArriving:(id)arg1 messageContext:(SEL)arg2 
  0x001000158cb -(void)simulateMessageReceive:(id)arg1 serviceName:(SEL)arg2 groupID:(id)arg3 handles:(id)arg4 sender:(id)arg5 messageContext:(id)arg6 
  0x00100015a5a -(unsigned long)_requestLastMessagesForChatsBatchSize
  0x00100015a77 -(void)requestLastMessagesForChatsWithMessageContext:(id)arg1 
  0x00100016081 -(void)purgeAttachmentsForChatGUID:(id)arg1 messageContext:(SEL)arg2 
  0x00100002935 -(void)_initiateScreenSharingWithID:(id)arg1 isContact:(SEL)arg2 sharingMyScreen:(id)arg3 
  0x00100002a91 -(void)inviteHandleIDToShareMyScreen:(id)arg1 isContact:(SEL)arg2 messageContext:(id)arg3 
  0x00100002aa9 -(void)askHandleIDToShareTheirScreen:(id)arg1 isContact:(SEL)arg2 messageContext:(id)arg3 
  0x00100002ae3 -(BOOL)isSetup
  0x00100002af0 -(void)_setupComplete
  0x001000031c5 -(void)_loadAccounts
  0x001000036f4 -(void)_loadServices
  0x00100003a5d -(void)_loadPipelineServices
  0x00100003c37 -(void)_postAliveNotification
  0x00100003ca3 -(void)_migrateMacPreferenceIfNeeded
  0x00100004168 -(void)_migrateCatalystPreferenceIfNeeded
  0x00100005154 -(BOOL)_loadDaemon
  0x00100005466 -(id)init
  0x001000064c1 -(void)dealloc
  0x00100006689 -(void)_terminate
  0x001000066e6 -(void)terminate
  0x001000066fa -(void)terminateForcingIfNeeded:(id)arg1 
  0x00100006738 -(void)shutdown
  0x00100006821 -(void)requestQOSClassWhileServicingRequestsWithID:(id)arg1 messageContext:(SEL)arg2 
  0x0010000687c -(void)_reallyRefreshServiceCapabilities
  0x001000068c9 -(void)refreshServiceCapabilities
  0x001000068fe -(void)_deviceCapabilitiesChanged
  0x001000069f4 -(void)_importFinished
  0x00100006ab3 -(void)changeMyStatus:(id)arg1 forAccount:(SEL)arg2 messageContext:(id)arg3 
  0x00100006b92 -(void)_property:(id)arg1 changedFrom:(SEL)arg2 to:(id)arg3 
  0x00100006e62 -(void)_setValue:(id)arg1 ofProperty:(SEL)arg2 messageContext:(id)arg3 
  0x00100006f55 -(void)pruneProperties
  0x0010000753f -(void)setValue:(id)arg1 ofProperty:(SEL)arg2 messageContext:(id)arg3 
  0x0010000774d -(id)valueOfProperty:(id)arg1 
  0x00100007766 -(void)_setValue:(id)arg1 ofPersistentProperty:(SEL)arg2 listenerID:(id)arg3 messageContext:(id)arg4 
  0x00100007dea -(void)_setValue:(id)arg1 ofPersistentProperty:(SEL)arg2 messageContext:(id)arg3 
  0x00100007e02 -(void)_setValue:(id)arg1 ofPersistentProperty:(SEL)arg2 
  0x00100007e1a -(void)setValue:(id)arg1 ofPersistentProperty:(SEL)arg2 messageContext:(id)arg3 
  0x00100007ea4 -(id)valueOfPersistentProperty:(id)arg1 
  0x00100007ebd -(void)systemWillShutdown
  0x00100007fa6 -(void)systemDidFinishMigration
  0x00100008075 -(void)systemDidFastUserSwitchOut
  0x0010000862b -(void)systemDidFastUserSwitchIn
  0x00100008a08 -(void)systemDidLogout
  0x00100008a13 -(id)parentalControls
  0x00100008a2c -(void)logState
  0x00100008c81 -(void)logInfo
  0x0010000965d -(void)refreshBundleIDs
  0x00100009663 -(id)currentMessageContext
  0x0010000966d -(void)setCurrentMessageContext:(id)arg1 
  0x0010000969b -(id)properties
  0x001000096af -(id)persistentProperties
  0x001000096c3 -(id)iMessageIDSDelegate
  0x001000096d7 -(void)setIMessageIDSDelegate:(id)arg1 


0x0010007dc58 ParentalControlsService : NSObject /usr/lib/libobjc.A.dylib
{
	+0x0008 c _disableService (0x1)
	+0x0009 c _forceWhiteList (0x1)
	+0x0010 @"NSSet" _whitelist (0x8)
	+0x0018 @"NSString" _name (0x8)
}
 @property  BOOL disableService
 @property  BOOL forceWhiteList
 @property (strong) NSSet *whitelist
 @property (strong) NSString *name

  // instance methods
  0x00100009ae6 -(void)dealloc
  0x00100009b3d -(BOOL)disableService
  0x00100009b47 -(void)setDisableService:(id)arg1 
  0x00100009b50 -(BOOL)forceWhiteList
  0x00100009b5a -(void)setForceWhiteList:(id)arg1 
  0x00100009b63 -(id)whitelist
  0x00100009b77 -(void)setWhitelist:(id)arg1 
  0x00100009b86 -(id)name
  0x00100009b9a -(void)setName:(id)arg1 


0x0010007dca8 ParentalControls : NSObject /usr/lib/libobjc.A.dylib <ParentalControlsProtocol>
{
	+0x0008 @"NSMutableDictionary" _parentalControls (0x8)
	+0x0010 c _active (0x1)
	+0x0011 c _disableAV (0x1)
	+0x0012 c _forceChatLogging (0x1)
	+0x0013 c _shouldPostNotifications (0x1)
}
 @property (readonly, nonatomic) BOOL active
 @property (readonly, nonatomic) BOOL disableAV
 @property (readonly, nonatomic) BOOL forceChatLogging
 @property (nonatomic) BOOL shouldPostNotifications

  // class methods
  0x00100009ba9 +(id)standardControls
  0x0010000a67d +(id)objectForKey:(id)arg1 

  // instance methods
  0x00100009c14 -(id)init
  0x00100009d3b -(id)_serviceWithName:(id)arg1 
  0x00100009db5 -(void)_updateParentalSettings
  0x0010000a6d8 -(void)updateAccountActivation
  0x0010000ab7c -(BOOL)disableAV
  0x0010000aba7 -(BOOL)forceChatLogging
  0x0010000abd2 -(BOOL)disableService:(id)arg1 
  0x0010000ac44 -(BOOL)disableAccount:(id)arg1 
  0x0010000ac78 -(BOOL)disableServiceSession:(id)arg1 
  0x0010000acac -(id)whitelistForServiceSession:(id)arg1 
  0x0010000ad3f -(BOOL)forceWhitelistForServiceSession:(id)arg1 
  0x0010000adc4 -(void)_managedPrefsNotification:(id)arg1 
  0x0010000adff -(BOOL)shouldPostNotifications
  0x0010000ae09 -(void)setShouldPostNotifications:(id)arg1 
  0x0010000ae12 -(BOOL)active


0x0010007dcf8 IMDaemonMIGInterface : NSObject /usr/lib/libobjc.A.dylib
{
	+0x0008 @"NSObject<OS_xpc_object>" _server (0x8)
	+0x0010 @"NSObject<OS_dispatch_queue>" _connection_queue (0x8)
	+0x0018 i _notifyToken (0x4)
	+0x0020 @ _delegate (0x8)
	+0x0028 c _shuttingDown (0x1)
}
 @property  <IMDaemonMIGInterfaceDelegate> *delegate

  // class methods
  0x00100033c4e +(id)sharedInstance

  // instance methods
  0x00100033cdd -(void)__setupServer
  0x00100034646 -(void)acceptIncomingGrantRequests
  0x001000346b4 -(void)denyIncomingGrantRequests
  0x00100034731 -(id)delegate
  0x0010003473b -(void)setDelegate:(id)arg1 


0x00100076890 NSObject(IMDaemonSingleton)
	// class methods
	0x00100002abe +[NSObject(IMDaemonSingleton) sharedDaemon]

0x00000000000 01 00 0200 /System/Library/PrivateFrameworks/FTServices.framework/Versions/A/FTServices: FTDeviceSupport 
0x00000000000 01 00 0600 /System/Library/PrivateFrameworks/IncomingCallFilter.framework/Versions/A/IncomingCallFilter: ICFCallServer 
0x00000000000 01 00 0500 /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS: IDSServerBag 
0x00000000000 01 00 0900 /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities: IMAssociatedMessageItem 
0x00000000000 01 00 0900 /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities: IMCTSMSUtilities 
0x00000000000 01 00 0100 /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation: IMCallMonitor 
0x00000000000 01 00 0900 /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities: IMCoreAutomationNotifications 
0x00000000000 01 00 0900 /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities: IMCoreSpotlightUtilities 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDAccountController 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDAttachmentStore 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDCKAttachmentSyncController 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDCKCacheDeleteManager 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDCKChatSyncController 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDCKExitManager 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDCKMessageSyncController 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDCKRampManager 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDCKRecordSaltManager 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDCKSyncController 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDCKUtilities 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDChatRegistry 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDChatStore 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDFileTransferCenter 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDIDSAccount 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDIDSService 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDInternalPhishingController 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDInvocationForwarder 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDLegactDTController 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDLocationSharingController 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDMessageStore 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDNicknameController 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDNotificationResponseUtilities 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDOneTimeCodeManager 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDRecordZoneManager 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDReplayController 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDServiceController 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDSoundUtilities 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDStickerRegistry 
0x00000000000 01 00 0900 /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities: IMDefaults 
0x00000000000 01 00 0900 /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities: IMDeleteActionHelper 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMDiMessageIDSDelegate 
0x00000000000 01 00 0900 /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities: IMFeatureFlags 
0x00000000000 01 00 0100 /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation: IMInvocationQueue 
0x00000000000 01 00 0900 /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities: IMItem 
0x00000000000 01 00 0100 /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation: IMLocalObject 
0x00000000000 01 00 0100 /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation: IMLockdownManager 
0x00000000000 01 00 0900 /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities: IMLogDump 
0x00000000000 01 00 0900 /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities: IMMessageItem 
0x00000000000 01 00 0900 /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities: IMMessageNotificationController 
0x00000000000 01 00 0900 /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities: IMMessageNotificationTimeManager 
0x00000000000 01 00 0900 /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities: IMMetricsCollector 
0x00000000000 01 00 0100 /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation: IMPowerAssertion 
0x00000000000 01 00 0100 /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation: IMRemoteObject 
0x00000000000 01 00 0100 /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation: IMRemoteObjectBroadcaster 
0x00000000000 01 00 0900 /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities: IMSandboxingUtils 
0x00000000000 01 00 0100 /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation: IMSystemMonitor 
0x00000000000 01 00 0700 /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore: IMTunesController 
0x00000000000 01 00 0100 /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation: IMUserNotificationCenter 
0x00000000000 01 00 0d00 /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation: NSArray 
0x00000000000 01 00 0a00 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation: NSAutoreleasePool 
0x00000000000 01 00 0a00 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation: NSBundle 
0x00000000000 01 00 0a00 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation: NSCharacterSet 
0x00000000000 01 00 0d00 /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation: NSConstantArray 
0x00000000000 01 00 0d00 /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation: NSConstantDictionary 
0x00000000000 01 00 0a00 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation: NSConstantIntegerNumber 
0x00000000000 01 00 0d00 /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation: NSDate 
0x00000000000 01 00 0d00 /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation: NSDictionary 
0x00000000000 01 00 0a00 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation: NSDistributedNotificationCenter 
0x00000000000 01 00 0a00 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation: NSError 
0x00000000000 01 00 0a00 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation: NSFileManager 
0x00000000000 01 00 0a00 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation: NSKeyedArchiver 
0x00000000000 01 00 0d00 /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation: NSMutableArray 
0x00000000000 01 00 0a00 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation: NSMutableAttributedString 
0x00000000000 01 00 0d00 /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation: NSMutableDictionary 
0x00000000000 01 00 0d00 /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation: NSMutableSet 
0x00000000000 01 00 0a00 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation: NSNotificationCenter 
0x00000000000 01 00 0d00 /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation: NSNull 
0x00000000000 01 00 0a00 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation: NSNumber 
0x00000000000 01 00 0b00 /usr/lib/libobjc.A.dylib: NSObject 
0x00000000000 01 00 0a00 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation: NSRecursiveLock 
0x00000000000 01 00 0d00 /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation: NSRunLoop 
0x00000000000 01 00 0d00 /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation: NSSet 
0x00000000000 01 00 0a00 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation: NSString 
0x00000000000 01 00 0a00 /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation: NSThread 
0x00000000000 01 00 0d00 /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation: NSURL 
0x00000000000 01 00 0d00 /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation: NSUserDefaults 
0x00000000000 01 00 0100 /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation: NetworkChangeNotifier 
