/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCAccountSession, BRCContainerMetadataSyncPersistedState, NSMutableArray, NSMutableDictionary, NSString;

@interface BRCContainerMetadataSyncDownOperation : _BRCOperation <BRCOperationSubclass> {
    NSMutableArray *_desiredKeysForDesiredAssets;
    NSMutableArray *_recordIDsForDesiredAssets;
    NSMutableDictionary *_recordIDsToVersionETagsForDesiredAssets;
    BRCAccountSession *_session;
    BRCContainerMetadataSyncPersistedState *_state;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSession:(id)arg1 state:(id)arg2;
- (void)main;
- (void)performAfterCreatingZoneIfNeeded:(id)arg1;
- (void)performAfterFetchingAssetContents:(id)arg1;
- (void)performAfterFetchingRecordChanges:(id)arg1;
- (BOOL)shouldRetryForError:(id)arg1;

@end
