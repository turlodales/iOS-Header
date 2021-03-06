//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarNotification/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol CALNIconCache <NSObject>
- (_Bool)forceRemoveAllCachedIconsWithError:(id *)arg1;
- (_Bool)removeIconWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (_Bool)addIconsWithIdentifiers:(NSArray *)arg1 error:(id *)arg2;
- (NSString *)iconIdentifierForCachedIconPath:(NSString *)arg1;
- (NSString *)cachedIconPathForIconIdentifier:(NSString *)arg1;
@end

