//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface WFActionDrawerAppItem : NSObject
{
    NSString *_name;
    UIImage *_icon;
    NSString *_bundleIdentifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (long long)compare:(id)arg1;
- (id)initWithName:(id)arg1 icon:(id)arg2 bundleIdentifier:(id)arg3;
- (id)initWithBundleIdentifier:(id)arg1;

@end

