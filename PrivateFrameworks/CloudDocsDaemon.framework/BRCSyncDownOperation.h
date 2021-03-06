/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCServerZone, NSString;

@interface BRCSyncDownOperation : _BRCOperation <BRCOperationSubclass> {
    BOOL _hasCaughtUp;
    BOOL _isConsistent;
    BRCServerZone *_serverZone;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) BOOL hasCaughtUp;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isConsistent;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_learnOwnerIdentity:(id)arg1;
- (void)_performAfterFetchingOwnerIdentityForShareID:(id)arg1 block:(id)arg2;
- (void)_performAfterFetchingRecordChanges:(id)arg1;
- (void)_performAfterFetchingXattrsForRecordIDs:(id)arg1 block:(id)arg2;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (BOOL)hasCaughtUp;
- (id)initWithServerZone:(id)arg1;
- (BOOL)isConsistent;
- (void)main;
- (BOOL)shouldRetryForError:(id)arg1;

@end
