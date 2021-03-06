//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentManager/NSCopying-Protocol.h>
#import <DocumentManager/NSSecureCoding-Protocol.h>

@class NSArray, NSPredicate, NSString, UIDocumentBrowserActionDescriptor, UIImage;

@interface UIDocumentBrowserAction : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _supportsMultipleItems;
    _Bool _requiresResolvedItems;
    _Bool _requiresVersioning;
    _Bool _performActionExitsEditMode;
    NSString *_identifier;
    NSString *_localizedTitle;
    long long _availability;
    UIImage *_image;
    NSArray *_supportedContentTypes;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _resolvedHandler;
    CDUnknownBlockType _unresolvedHandler;
    NSString *_uiActionProviderIdentifier;
    long long _style;
    long long _navigationSide;
    unsigned long long _menuSortOrder;
    NSPredicate *_filteringPredicate;
    long long _actionStyle;
    UIDocumentBrowserActionDescriptor *_uiActionDescriptor;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) UIDocumentBrowserActionDescriptor *uiActionDescriptor; // @synthesize uiActionDescriptor=_uiActionDescriptor;
@property(nonatomic) long long actionStyle; // @synthesize actionStyle=_actionStyle;
@property(nonatomic) _Bool performActionExitsEditMode; // @synthesize performActionExitsEditMode=_performActionExitsEditMode;
@property(retain, nonatomic) NSPredicate *filteringPredicate; // @synthesize filteringPredicate=_filteringPredicate;
@property(nonatomic) unsigned long long menuSortOrder; // @synthesize menuSortOrder=_menuSortOrder;
@property(nonatomic) _Bool requiresVersioning; // @synthesize requiresVersioning=_requiresVersioning;
@property(nonatomic) long long navigationSide; // @synthesize navigationSide=_navigationSide;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *uiActionProviderIdentifier; // @synthesize uiActionProviderIdentifier=_uiActionProviderIdentifier;
@property(copy, nonatomic) CDUnknownBlockType unresolvedHandler; // @synthesize unresolvedHandler=_unresolvedHandler;
@property(copy, nonatomic) CDUnknownBlockType resolvedHandler; // @synthesize resolvedHandler=_resolvedHandler;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) _Bool requiresResolvedItems; // @synthesize requiresResolvedItems=_requiresResolvedItems;
@property(nonatomic) _Bool supportsMultipleItems; // @synthesize supportsMultipleItems=_supportsMultipleItems;
@property(copy, nonatomic) NSArray *supportedContentTypes; // @synthesize supportedContentTypes=_supportedContentTypes;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long availability; // @synthesize availability=_availability;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)commonInit;
- (id)initWithIdentifier:(id)arg1 localizedTitle:(id)arg2 unresolvedHandler:(CDUnknownBlockType)arg3;
- (id)initWithUIActionDescriptor:(id)arg1;
- (id)initWithIdentifier:(id)arg1 localizedTitle:(id)arg2 resolvedHandler:(CDUnknownBlockType)arg3;
- (id)initWithIdentifier:(id)arg1 localizedTitle:(id)arg2 availability:(long long)arg3 handler:(CDUnknownBlockType)arg4;

@end

