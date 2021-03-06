/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSAddToWishlistMessage : PBCodable <NSCopying> {
    unsigned long long _databaseID;
    struct { 
        unsigned int databaseID : 1; 
        unsigned int itemID : 1; 
        unsigned int sessionIdentifier : 1; 
    } _has;
    unsigned long long _itemID;
    int _sessionIdentifier;
}

@property unsigned long long databaseID;
@property BOOL hasDatabaseID;
@property BOOL hasItemID;
@property BOOL hasSessionIdentifier;
@property unsigned long long itemID;
@property int sessionIdentifier;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)databaseID;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasDatabaseID;
- (BOOL)hasItemID;
- (BOOL)hasSessionIdentifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)itemID;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)sessionIdentifier;
- (void)setDatabaseID:(unsigned long long)arg1;
- (void)setHasDatabaseID:(BOOL)arg1;
- (void)setHasItemID:(BOOL)arg1;
- (void)setHasSessionIdentifier:(BOOL)arg1;
- (void)setItemID:(unsigned long long)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end
