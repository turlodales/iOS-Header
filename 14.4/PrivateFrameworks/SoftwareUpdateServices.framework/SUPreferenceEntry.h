//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SUPreferenceEntry : NSObject
{
    NSString *_preferenceKey;
    long long _type;
    NSString *_description;
}

@property(readonly, retain, nonatomic) NSString *description; // @synthesize description=_description;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, retain, nonatomic) NSString *preferenceKey; // @synthesize preferenceKey=_preferenceKey;
- (id)initWithKey:(id)arg1 type:(long long)arg2 description:(id)arg3;

@end

