//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/NSObject-Protocol.h>

@class NSArray, NSString, WBSTranslationContext;

@protocol WBSTranslationContextTranslating <NSObject>
- (void)translationContext:(WBSTranslationContext *)arg1 translateWebpageContents:(NSArray *)arg2 toTargetLocale:(NSString *)arg3 translationHandler:(void (^)(_WKTextManipulationItem *, NSString *, NSError *))arg4;
@end

