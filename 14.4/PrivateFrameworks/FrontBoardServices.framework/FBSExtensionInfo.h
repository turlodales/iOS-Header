//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSBundleInfo.h>

@class NSString;

@interface FBSExtensionInfo : FBSBundleInfo
{
    NSString *_typeIdentifier;
    NSString *_extensionIdentifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property(readonly, copy, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
- (id)_initWithPlugInKitProxy:(id)arg1;
- (id)_initWithBundleProxy:(id)arg1 url:(id)arg2;
- (id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2;

@end

