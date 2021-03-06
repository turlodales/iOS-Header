//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsThemeViewController.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "VGVirtualGarageObserver-Protocol.h"

@class GEOLPRRegion, GEOLPRRoot, NSArray, NSMutableDictionary, NSString, UIButton, UIPickerView, UITextField, VGVehicle;

__attribute__((visibility("hidden")))
@interface LPROnboardingAddLicensePlatePageViewController : MapsThemeViewController <UITextFieldDelegate, UIPickerViewDataSource, UIPickerViewDelegate, VGVirtualGarageObserver>
{
    long long _scenario;
    _Bool _isAddingVehicle;
    _Bool _isSubmittingLicensePlate;
    NSString *_regionCode;
    NSMutableDictionary *_powerTypes;
    NSArray *_powerTypesKey;
    UIPickerView *_powerPicker;
    UIButton *_powerButton;
    UITextField *_licensePlateTextField;
    unsigned long long _selectedPowerType;
    VGVehicle *_vehicle;
    GEOLPRRegion *_currentRegion;
    GEOLPRRoot *_lprRules;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GEOLPRRoot *lprRules; // @synthesize lprRules=_lprRules;
@property(retain, nonatomic) GEOLPRRegion *currentRegion; // @synthesize currentRegion=_currentRegion;
@property(retain, nonatomic) VGVehicle *vehicle; // @synthesize vehicle=_vehicle;
@property(nonatomic) unsigned long long selectedPowerType; // @synthesize selectedPowerType=_selectedPowerType;
@property(retain, nonatomic) UITextField *licensePlateTextField; // @synthesize licensePlateTextField=_licensePlateTextField;
@property(retain, nonatomic) UIButton *powerButton; // @synthesize powerButton=_powerButton;
@property(retain, nonatomic) UIPickerView *powerPicker; // @synthesize powerPicker=_powerPicker;
@property(retain, nonatomic) NSArray *powerTypesKey; // @synthesize powerTypesKey=_powerTypesKey;
@property(retain, nonatomic) NSMutableDictionary *powerTypes; // @synthesize powerTypes=_powerTypes;
@property(retain, nonatomic) NSString *regionCode; // @synthesize regionCode=_regionCode;
- (void)virtualGarageDidUpdate:(id)arg1;
- (void)nextButtonPressed;
- (_Bool)plateIsValid:(id)arg1;
- (id)licensePlateRules;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)_powerTitleAtRow:(long long)arg1;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRegion:(id)arg1 lprRules:(id)arg2 powerTypes:(id)arg3 vehicle:(id)arg4 scenario:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

