//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenTimeSettingsUI/NSCopying-Protocol.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface STUIDevice : NSObject <NSCopying>
{
    short _platform;
    NSString *_name;
    NSString *_identifier;
    NSDate *_lastFamilyCheckinDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *lastFamilyCheckinDate; // @synthesize lastFamilyCheckinDate=_lastFamilyCheckinDate;
@property(readonly) short platform; // @synthesize platform=_platform;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2 platform:(short)arg3 lastFamilyCheckinDate:(id)arg4;

@end

