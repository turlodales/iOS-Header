//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFSearchViewAppearFeedback : SFFeedback
{
    _Bool _isOnLockScreen;
    _Bool _isOverApp;
    _Bool _readerTextAvailable;
    unsigned long long _viewAppearEvent;
    NSString *_preexistingInput;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *preexistingInput; // @synthesize preexistingInput=_preexistingInput;
@property(nonatomic) _Bool readerTextAvailable; // @synthesize readerTextAvailable=_readerTextAvailable;
@property(nonatomic) _Bool isOverApp; // @synthesize isOverApp=_isOverApp;
@property(nonatomic) _Bool isOnLockScreen; // @synthesize isOnLockScreen=_isOnLockScreen;
@property(nonatomic) unsigned long long viewAppearEvent; // @synthesize viewAppearEvent=_viewAppearEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(unsigned long long)arg1;

@end

