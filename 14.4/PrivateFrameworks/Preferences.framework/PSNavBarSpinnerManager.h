//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PSNavBarSpinnerManager : NSObject
{
    NSMutableDictionary *_savedRecords;
}

+ (id)sharedSpinnerManager;
- (void).cxx_destruct;
- (void)stopAnimatingForIdentifier:(id)arg1;
- (void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2;
- (void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2 hideBackButton:(_Bool)arg3;
- (id)init;

@end

