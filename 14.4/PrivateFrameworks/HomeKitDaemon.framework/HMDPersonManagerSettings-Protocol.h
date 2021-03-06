//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSObject-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMHomePersonManagerSettings, HMIExternalPersonManagerSettings, HMIHomePersonManagerSettings, HMPhotosPersonManagerSettings;

@protocol HMDPersonManagerSettings <NSObject, NSCopying, NSSecureCoding>
@property(readonly) _Bool requiresPersistentStorage;
- (HMHomePersonManagerSettings *)createHMHomePersonManagerSettings;
- (HMPhotosPersonManagerSettings *)createHMPhotosPersonManagerSettings;
- (HMIHomePersonManagerSettings *)createHMIHomePersonManagerSettings;
- (HMIExternalPersonManagerSettings *)createHMIExternalPersonManagerSettings;
@end

