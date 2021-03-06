//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdCore/ADSingleton.h>

#import <AdID/AMSBagConsumer-Protocol.h>

@class NSString;

@interface ADAMSBagManager : ADSingleton <AMSBagConsumer>
{
}

+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
+ (id)sharedInstance;
- (id)retrieveJingleRequestURLFromAMSBagWithPartialityKey:(id)arg1;
- (_Bool)retrieveIsSponsoredAdsEnabledValueForAdTrackingdFromAMSBag;
- (_Bool)retrieveIsSponsoredAdsEnabledValueFromAMSBag;
- (_Bool)authenticateAccountThroughAMSOperation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

