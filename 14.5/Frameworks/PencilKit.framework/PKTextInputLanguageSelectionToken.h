//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/NSCopying-Protocol.h>

@protocol PKTextInputLanguageSelectionTokenStore;

@interface PKTextInputLanguageSelectionToken : NSObject <NSCopying>
{
    id <PKTextInputLanguageSelectionTokenStore> _store;
}

+ (id)tokenWithStore:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)invalidate;

@end

