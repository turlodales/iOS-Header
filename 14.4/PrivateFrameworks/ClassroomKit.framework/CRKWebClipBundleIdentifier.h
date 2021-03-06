//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CRKWebClipBundleIdentifier : NSObject
{
    NSString *_stringValue;
}

+ (id)specificWebClipPrefix;
+ (id)webClipHostApplicationBundleIdentifier;
+ (id)webClipBundleIdentifierInString:(id)arg1;
+ (id)bundleIdentifierByLocatingWebClipBundleIdentifierInString:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, nonatomic, getter=isSpecificWebClip) _Bool specificWebClip;
@property(readonly, nonatomic, getter=isWebClipHostApplication) _Bool webClipHostApplication;
- (id)initWithString:(id)arg1;
- (id)init;

@end

