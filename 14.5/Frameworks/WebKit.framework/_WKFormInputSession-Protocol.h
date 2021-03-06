//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/NSObject-Protocol.h>

@class NSArray, NSObject, NSString, UIView;
@protocol NSSecureCoding, _WKFocusedElementInfo;

@protocol _WKFormInputSession <NSObject>
@property(readonly, nonatomic) _Bool requiresStrongPasswordAssistance;
@property(nonatomic) _Bool forceSecureTextEntry;
@property(nonatomic) _Bool accessoryViewShouldNotShow;
@property(copy, nonatomic) NSArray *suggestions;
@property(retain, nonatomic) UIView *customInputAccessoryView;
@property(retain, nonatomic) UIView *customInputView;
@property(copy, nonatomic) NSString *accessoryViewCustomButtonTitle;
@property(readonly, nonatomic) id <_WKFocusedElementInfo> focusedElementInfo;
@property(readonly, nonatomic) NSObject<NSSecureCoding> *userObject;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)reloadFocusedElementContextView;
@end

