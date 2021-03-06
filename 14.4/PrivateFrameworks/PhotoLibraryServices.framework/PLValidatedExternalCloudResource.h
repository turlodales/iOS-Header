//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLValidatedExternalResource.h>

@class NSDate, NSString;

@interface PLValidatedExternalCloudResource : PLValidatedExternalResource
{
    short _remoteAvailability;
    short _cloudLocalState;
    short _prefetchCount;
    unsigned long long _cplType;
    unsigned long long _sourceCplType;
    NSDate *_masterDateCreated;
    NSDate *_lastOnDemandDownloadDate;
    NSDate *_lastPrefetchDate;
    NSDate *_prunedAt;
    NSString *_fingerprint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
@property(retain, nonatomic) NSDate *prunedAt; // @synthesize prunedAt=_prunedAt;
@property(nonatomic) short prefetchCount; // @synthesize prefetchCount=_prefetchCount;
@property(retain, nonatomic) NSDate *lastPrefetchDate; // @synthesize lastPrefetchDate=_lastPrefetchDate;
@property(retain, nonatomic) NSDate *lastOnDemandDownloadDate; // @synthesize lastOnDemandDownloadDate=_lastOnDemandDownloadDate;
@property(retain, nonatomic) NSDate *masterDateCreated; // @synthesize masterDateCreated=_masterDateCreated;
@property(nonatomic) short cloudLocalState; // @synthesize cloudLocalState=_cloudLocalState;
@property(nonatomic) short remoteAvailability; // @synthesize remoteAvailability=_remoteAvailability;
@property(nonatomic) unsigned long long sourceCplType; // @synthesize sourceCplType=_sourceCplType;
@property(nonatomic) unsigned long long cplType; // @synthesize cplType=_cplType;
- (unsigned long long)cplTypeWithAssetID:(id)arg1;
- (_Bool)isEqualToValidatedExternalResource:(id)arg1;
- (id)initWithInternalResource:(id)arg1;
- (id)initWithCloudResource:(id)arg1;

@end

