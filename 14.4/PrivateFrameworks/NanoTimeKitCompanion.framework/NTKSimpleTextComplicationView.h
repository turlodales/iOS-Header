//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKComplicationDisplay-Protocol.h>
#import <NanoTimeKitCompanion/NTKTemplateComplicationDisplay-Protocol.h>

@class CLKComplicationTemplateSimpleText, CLKDevice, CLKFont, NSDate, NSString, NTKColoringLabel;
@protocol NTKComplicationDisplayObserver;

@interface NTKSimpleTextComplicationView : UIView <NTKComplicationDisplay, NTKTemplateComplicationDisplay>
{
    _Bool canUseCurvedText;
    id <NTKComplicationDisplayObserver> displayObserver;
    NTKColoringLabel *_label;
    CLKDevice *_device;
    CLKComplicationTemplateSimpleText *_template;
    NSDate *_timeTravelDate;
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *timeTravelDate; // @synthesize timeTravelDate=_timeTravelDate;
@property(retain, nonatomic) CLKComplicationTemplateSimpleText *template; // @synthesize template=_template;
@property(retain, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NTKColoringLabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool canUseCurvedText; // @synthesize canUseCurvedText;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (id)complicationTemplate;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;
@property(readonly, nonatomic) unsigned long long complicationType;
@property(retain, nonatomic) CLKFont *font;
- (id)_defaultFont;
- (void)_updateLabelFrame;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

