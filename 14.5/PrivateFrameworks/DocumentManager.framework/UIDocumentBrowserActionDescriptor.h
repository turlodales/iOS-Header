//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate, NSString;

@interface UIDocumentBrowserActionDescriptor : NSObject
{
    _Bool _displayInline;
    NSString *_uiActionProviderIdentifier;
    NSString *_fileProviderIdentifier;
    NSString *_identifier;
    NSString *_displayName;
    NSPredicate *_predicate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool displayInline; // @synthesize displayInline=_displayInline;
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *fileProviderIdentifier; // @synthesize fileProviderIdentifier=_fileProviderIdentifier;
@property(readonly, nonatomic) NSString *uiActionProviderIdentifier; // @synthesize uiActionProviderIdentifier=_uiActionProviderIdentifier;
- (id)initWithIdentifier:(id)arg1 uiActionProviderIdentifier:(id)arg2 fileProviderIdentifier:(id)arg3 displayName:(id)arg4 predicate:(id)arg5 displayInline:(_Bool)arg6;

@end

