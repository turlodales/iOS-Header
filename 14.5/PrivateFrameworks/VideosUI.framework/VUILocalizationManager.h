//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface VUILocalizationManager : NSObject
{
    NSDictionary *_overideLocDict;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) NSDictionary *overideLocDict; // @synthesize overideLocDict=_overideLocDict;
- (void)updateWithJSDictionary:(id)arg1;
- (id)localizedStringForKey:(id)arg1 withCounts:(id)arg2;
- (id)localizedStringForKey:(id)arg1;

@end

