//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSData, NSNumber, NSString;

@interface SSPlayInfoRequestContext : NSObject <SSXPCCoding, NSCopying>
{
    NSNumber *_accountIdentifier;
    NSNumber *_contentIdentifier;
    NSString *_playerGUID;
    NSData *_sic;
    NSArray *_sinfs;
    NSString *_playbackType;
}

@property(copy, nonatomic) NSArray *sinfs; // @synthesize sinfs=_sinfs;
@property(copy, nonatomic) NSData *SICData; // @synthesize SICData=_sic;
@property(copy, nonatomic) NSString *playerGUID; // @synthesize playerGUID=_playerGUID;
@property(copy, nonatomic) NSString *playbackType; // @synthesize playbackType=_playbackType;
@property(copy, nonatomic) NSNumber *contentIdentifier; // @synthesize contentIdentifier=_contentIdentifier;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

