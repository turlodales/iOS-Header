//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface TSNotificationSettings : NSObject
{
    MISSING_TYPE *authorizationStatus;
    MISSING_TYPE *sound;
    MISSING_TYPE *badge;
    MISSING_TYPE *showOnLockScreen;
    MISSING_TYPE *showInNotificationCenter;
    MISSING_TYPE *showBanners;
}

- (id)init;
- (id)initWithSystemSettings:(id)arg1;
@property(nonatomic, readonly) _Bool showBanners; // @synthesize showBanners;
@property(nonatomic, readonly) _Bool showInNotificationCenter; // @synthesize showInNotificationCenter;
@property(nonatomic, readonly) _Bool showOnLockScreen; // @synthesize showOnLockScreen;
@property(nonatomic, readonly) _Bool badge; // @synthesize badge;
@property(nonatomic, readonly) _Bool sound; // @synthesize sound;
@property(nonatomic, readonly) long long authorizationStatus; // @synthesize authorizationStatus;

@end

