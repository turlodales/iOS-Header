//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSUserDefaults;

@interface ANDefaults : NSObject
{
    NSDictionary *_defaultsItems;
    NSUserDefaults *_defaults;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(readonly, nonatomic) NSDictionary *defaultsItems; // @synthesize defaultsItems=_defaultsItems;
- (void)setBool:(_Bool)arg1 forDefault:(id)arg2;
- (void)setNumber:(id)arg1 forDefault:(id)arg2;
- (void)setObject:(id)arg1 forDefault:(id)arg2;
- (_Bool)boolForDefault:(id)arg1;
- (id)numberForDefault:(id)arg1;
- (id)objectForDefault:(id)arg1;
- (id)init;

@end

