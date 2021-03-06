//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL, UISceneOpenURLOptions;

@interface UIOpenURLContext : NSObject
{
    NSURL *_URL;
    UISceneOpenURLOptions *_options;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UISceneOpenURLOptions *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSDictionary *URLOptionsDictionary; // @dynamic URLOptionsDictionary;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *optionsDictionary;

@end

