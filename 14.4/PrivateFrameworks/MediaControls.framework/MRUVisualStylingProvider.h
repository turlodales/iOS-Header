//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaControls/MTVisualStylingProviderObservingPrivate-Protocol.h>

@class MTVisualStylingProvider, NSHashTable, NSString, UIColor;

@interface MRUVisualStylingProvider : NSObject <MTVisualStylingProviderObservingPrivate>
{
    _Bool _supportsVibrancy;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    UIColor *_tertiaryColor;
    UIColor *_quaternaryColor;
    UIColor *_separatorColor;
    NSHashTable *_observers;
    MTVisualStylingProvider *_visualStylingProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool supportsVibrancy; // @synthesize supportsVibrancy=_supportsVibrancy;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(retain, nonatomic) UIColor *quaternaryColor; // @synthesize quaternaryColor=_quaternaryColor;
@property(retain, nonatomic) UIColor *tertiaryColor; // @synthesize tertiaryColor=_tertiaryColor;
@property(retain, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(retain, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
- (double)alphaForNowPlayingStyle:(long long)arg1;
- (long long)blendModeForNowPlayingStyle:(long long)arg1;
- (id)colorForNowPlayingStyle:(long long)arg1;
- (long long)visualStyleForNowPlayingStyle:(long long)arg1;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (void)notifyObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)applyStyle:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)applyStyle:(long long)arg1 toView:(id)arg2;
- (id)initWithVisualStylingProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

