//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDemoDataSleepParameters, NSArray, NSDate, NSDateComponents, NSDictionary, NSString, _HKMedicalIDData;

@interface HDDemoDataPerson : NSObject
{
    _Bool _createHighFidelityData;
    _Bool _sexualActivityIsTryingToConceive;
    _Bool _useContinuousGlucoseMonitoring;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_personDescription;
    NSDateComponents *_birthDateComponents;
    NSDate *_birthDate;
    long long _biologicalSex;
    long long _bloodType;
    long long _fitzpatrickSkinType;
    double _timeIncrement;
    double _timeIncrementDuringExercise;
    double _dawnTime;
    double _sunsetTime;
    double _genericSampleTimeNoiseStdDev;
    long long _profileType;
    double _uvIndexSampleFrequency;
    double _waistCircumferenceInInches;
    double _wristCircumferenceInInches;
    double _forearmCircumferenceInInches;
    double _hipCircumferenceInInches;
    double _heightSampleTime;
    double _heightTargetInCm;
    double _heightSampleTimeFrequency;
    double _heightSampleNoiseStdDev;
    double _weightSampleTime;
    double _weightTargetInKg;
    double _weightSampleTimeFrequency;
    double _weightSampleNoiseStdDev;
    double _weightLossStartDay;
    double _weightDailyChangeStdDev;
    double _weightDailyMaxLoss;
    double _weightChangePercentageMax;
    NSArray *_weightGainHolidayDaysInYear;
    long long _restingHeartRate;
    long long _restingHeartRateMaxDailyDifference;
    long long _restingHeartRateMaxTotalDifference;
    long long _walkingHeartRateAverage;
    long long _walkingHeartRateAverageMaxDailyDifference;
    long long _walkingHeartRateAverageMaxTotalDifference;
    double _heartRateSampleFrequency;
    double _heartRateSampleFrequencyStdDev;
    double _heartRateSampleNoiseStdDev;
    double _vo2MaxValueStdDev;
    double _vo2MaxValueMaxConsecutiveDifference;
    double _vo2MaxValueMaxTotalDifference;
    double _vo2MaxSampleTimeNoiseStdDev;
    long long _restingRespirationRate;
    double _restingRespirationRateSampleFrequency;
    double _restingRespirationRateSampleNoiseStdDev;
    double _bloodPressureSampleFrequency;
    long long _restingSystolicBloodPressure;
    long long _restingDiastolicBloodPressure;
    double _restingSystolicBloodPressureSampleNoiseStdDev;
    double _restingDiastolicBloodPressureSampleNoiseStdDev;
    double _bodyTempFeverMultiplier;
    double _bodyTempExerciseMultiplier;
    double _bodyTempSampleFrequency;
    double _bodyTempSampleNoiseStdDev;
    double _oxygenSaturationMean;
    double _oxygenSaturationStdDev;
    double _oxygenSaturationMeanAtElevation;
    double _oxygenSaturationStdDevAtElevation;
    double _oxygenSaturationMeasuringSuccessRate;
    double _oxygenSaturationMeasuringSuccessRateDuringSleep;
    double _oxygenSaturationSampleFrequency;
    double _peripheralPerfusionIndexMean;
    double _peripheralPerfusionIndexSampleFrequency;
    double _peripheralPerfusionIndexStdDev;
    double _sexualActivityProbabilityPercentage;
    double _sexualActivityProtectionProbabilityPercentage;
    double _sexualActivityProtectionDocumentationProbabilityPercentage;
    double _menstrualPeriodFrequency;
    double _ovulationIndeterminateProbabilityPercentage;
    double _fitzpatrickSkinTypeSampleTime;
    long long _fitzpatrickSkinTypeScore;
    double _toothbrushingDurationMean;
    double _toothbrushingDurationMeanStdDev;
    double _handwashingDurationMean;
    double _handwashingDurationMeanStdDev;
    double _handwashingSampleFrequency;
    double _handwashingSampleFrequencyStdDev;
    double _activeCaloriesSampleFrequency;
    double _restingCaloriesSampleFrequency;
    double _stepsSampleFrequency;
    double _stepsSampleFrequencyDuringExercise;
    double _sedentarySampleFrequency;
    double _exerciseTimeSampleFrequency;
    double _moveGoal;
    double _swimmingStrokesPerYard;
    double _exerciseStartTime;
    double _exerciseStopTime;
    double _exerciseCooldownTime;
    double _exerciseStartTimeStdDev;
    double _exerciseStopTimeStdDev;
    double _exerciseIntensityPercentage;
    NSDictionary *_workoutPrototypesByCalendarDay;
    double _exerciseWeeklyWorkoutsMean;
    double _exerciseWeeklyWorkoutsStdDev;
    double _exercisePostDietWeeklyWorkoutsMean;
    double _exercisePostDietWeeklyWorkoutsStdDev;
    double _flightsClimbedDailyMean;
    double _flightsClimbedStdDev;
    double _flightsClimbedSampleTime;
    double _flightsClimbedSampleFrequency;
    double _flightsClimbedSampleFrequencyStdDev;
    double _rehabLogarithmicConstant;
    double _walkingSpeedMean;
    double _walkingSpeedStdDev;
    double _walkingSpeedSampleFrequency;
    double _walkingSpeedSampleFrequencyStdDev;
    double _stepLengthMean;
    double _stepLengthStdDev;
    double _stepLengthSampleFrequency;
    double _stepLengthSampleFrequencyStdDev;
    double _asymmetryPercentageMean;
    double _asymmetryPercentageStdDev;
    double _asymmetryPercentageSampleFrequency;
    double _asymmetryPercentageSampleFrequencyStdDev;
    double _doubleSupportPercentageMean;
    double _doubleSupportPercentageStdDev;
    double _doubleSupportPercentageSampleFrequency;
    double _doubleSupportPercentageSampleFrequencyStdDev;
    double _sixMinuteWalkTestDistanceMean;
    double _sixMinuteWalkTestDistanceStdDev;
    double _sixMinuteWalkTestDistanceSampleFrequency;
    double _sixMinuteWalkTestDistanceSampleFrequencyStdDev;
    double _stairAscentSpeedMean;
    double _stairAscentSpeedStdDev;
    double _stairAscentSpeedSampleFrequency;
    double _stairAscentSpeedSampleFrequencyStdDev;
    double _stairDescentSpeedMean;
    double _stairDescentSpeedStdDev;
    double _stairDescentSpeedSampleFrequency;
    double _stairDescentSpeedSampleFrequencyStdDev;
    double _breakfastTime;
    double _lunchTime;
    double _snackTime;
    double _dinnerTime;
    double _mealTimeSampleNoiseStdDev;
    double _preDietIntakeMultiplier;
    double _numCupsOfCoffeeDailyMean;
    double _numCupsOfCoffeeStdDev;
    double _waterConsumedSampleTime;
    double _waterConsumedSampleFrequency;
    double _waterConsumedDailyMean;
    double _waterConsumedStdDev;
    double _waterConsumedIntervalMean;
    double _waterConsumedIntervalStdDev;
    HDDemoDataSleepParameters *_weekdaySleepParameters;
    HDDemoDataSleepParameters *_weekendSleepParameters;
    double _wakeUpTimeNoiseStdDev;
    double _bedtimeNoiseStdDev;
    double _inBedTimeStdDev;
    unsigned long long _numSleepInterruptions;
    double _fallSampleFrequency;
    double _fallsDailyMean;
    double _fallsDailyStdDev;
    double _spirometrySampleFrequency;
    double _spirometrySampleTime;
    long long _asthmaSeverity;
    double _continuousGlucoseMonitoringSampleFrequency;
    double _numDailyFingerSticksAdherence;
    double _insulinSensitivity;
    double _insulinProduction;
    double _insulinAdherence;
    unsigned long long _insulinTherapy;
    double _mindfulSessionFrequency;
    long long _mindfulSessionMean;
    long long _mindfulSessionStdDev;
    long long _nutritionTrackingType;
    long long _resultsTrackingType;
    _HKMedicalIDData *_medicalIDData;
}

+ (id)defaultPersonWithBiologicalSex:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) _HKMedicalIDData *medicalIDData; // @synthesize medicalIDData=_medicalIDData;
@property(nonatomic) long long resultsTrackingType; // @synthesize resultsTrackingType=_resultsTrackingType;
@property(nonatomic) long long nutritionTrackingType; // @synthesize nutritionTrackingType=_nutritionTrackingType;
@property(nonatomic) long long mindfulSessionStdDev; // @synthesize mindfulSessionStdDev=_mindfulSessionStdDev;
@property(nonatomic) long long mindfulSessionMean; // @synthesize mindfulSessionMean=_mindfulSessionMean;
@property(nonatomic) double mindfulSessionFrequency; // @synthesize mindfulSessionFrequency=_mindfulSessionFrequency;
@property(nonatomic) unsigned long long insulinTherapy; // @synthesize insulinTherapy=_insulinTherapy;
@property(nonatomic) double insulinAdherence; // @synthesize insulinAdherence=_insulinAdherence;
@property(nonatomic) double insulinProduction; // @synthesize insulinProduction=_insulinProduction;
@property(nonatomic) double insulinSensitivity; // @synthesize insulinSensitivity=_insulinSensitivity;
@property(nonatomic) double numDailyFingerSticksAdherence; // @synthesize numDailyFingerSticksAdherence=_numDailyFingerSticksAdherence;
@property(nonatomic) double continuousGlucoseMonitoringSampleFrequency; // @synthesize continuousGlucoseMonitoringSampleFrequency=_continuousGlucoseMonitoringSampleFrequency;
@property(nonatomic) _Bool useContinuousGlucoseMonitoring; // @synthesize useContinuousGlucoseMonitoring=_useContinuousGlucoseMonitoring;
@property(nonatomic) long long asthmaSeverity; // @synthesize asthmaSeverity=_asthmaSeverity;
@property(nonatomic) double spirometrySampleTime; // @synthesize spirometrySampleTime=_spirometrySampleTime;
@property(nonatomic) double spirometrySampleFrequency; // @synthesize spirometrySampleFrequency=_spirometrySampleFrequency;
@property(nonatomic) double fallsDailyStdDev; // @synthesize fallsDailyStdDev=_fallsDailyStdDev;
@property(nonatomic) double fallsDailyMean; // @synthesize fallsDailyMean=_fallsDailyMean;
@property(nonatomic) double fallSampleFrequency; // @synthesize fallSampleFrequency=_fallSampleFrequency;
@property(nonatomic) unsigned long long numSleepInterruptions; // @synthesize numSleepInterruptions=_numSleepInterruptions;
@property(nonatomic) double inBedTimeStdDev; // @synthesize inBedTimeStdDev=_inBedTimeStdDev;
@property(nonatomic) double bedtimeNoiseStdDev; // @synthesize bedtimeNoiseStdDev=_bedtimeNoiseStdDev;
@property(nonatomic) double wakeUpTimeNoiseStdDev; // @synthesize wakeUpTimeNoiseStdDev=_wakeUpTimeNoiseStdDev;
@property(retain, nonatomic) HDDemoDataSleepParameters *weekendSleepParameters; // @synthesize weekendSleepParameters=_weekendSleepParameters;
@property(retain, nonatomic) HDDemoDataSleepParameters *weekdaySleepParameters; // @synthesize weekdaySleepParameters=_weekdaySleepParameters;
@property(nonatomic) double waterConsumedIntervalStdDev; // @synthesize waterConsumedIntervalStdDev=_waterConsumedIntervalStdDev;
@property(nonatomic) double waterConsumedIntervalMean; // @synthesize waterConsumedIntervalMean=_waterConsumedIntervalMean;
@property(nonatomic) double waterConsumedStdDev; // @synthesize waterConsumedStdDev=_waterConsumedStdDev;
@property(nonatomic) double waterConsumedDailyMean; // @synthesize waterConsumedDailyMean=_waterConsumedDailyMean;
@property(nonatomic) double waterConsumedSampleFrequency; // @synthesize waterConsumedSampleFrequency=_waterConsumedSampleFrequency;
@property(nonatomic) double waterConsumedSampleTime; // @synthesize waterConsumedSampleTime=_waterConsumedSampleTime;
@property(nonatomic) double numCupsOfCoffeeStdDev; // @synthesize numCupsOfCoffeeStdDev=_numCupsOfCoffeeStdDev;
@property(nonatomic) double numCupsOfCoffeeDailyMean; // @synthesize numCupsOfCoffeeDailyMean=_numCupsOfCoffeeDailyMean;
@property(nonatomic) double preDietIntakeMultiplier; // @synthesize preDietIntakeMultiplier=_preDietIntakeMultiplier;
@property(nonatomic) double mealTimeSampleNoiseStdDev; // @synthesize mealTimeSampleNoiseStdDev=_mealTimeSampleNoiseStdDev;
@property(nonatomic) double dinnerTime; // @synthesize dinnerTime=_dinnerTime;
@property(nonatomic) double snackTime; // @synthesize snackTime=_snackTime;
@property(nonatomic) double lunchTime; // @synthesize lunchTime=_lunchTime;
@property(nonatomic) double breakfastTime; // @synthesize breakfastTime=_breakfastTime;
@property(nonatomic) double stairDescentSpeedSampleFrequencyStdDev; // @synthesize stairDescentSpeedSampleFrequencyStdDev=_stairDescentSpeedSampleFrequencyStdDev;
@property(nonatomic) double stairDescentSpeedSampleFrequency; // @synthesize stairDescentSpeedSampleFrequency=_stairDescentSpeedSampleFrequency;
@property(nonatomic) double stairDescentSpeedStdDev; // @synthesize stairDescentSpeedStdDev=_stairDescentSpeedStdDev;
@property(nonatomic) double stairDescentSpeedMean; // @synthesize stairDescentSpeedMean=_stairDescentSpeedMean;
@property(nonatomic) double stairAscentSpeedSampleFrequencyStdDev; // @synthesize stairAscentSpeedSampleFrequencyStdDev=_stairAscentSpeedSampleFrequencyStdDev;
@property(nonatomic) double stairAscentSpeedSampleFrequency; // @synthesize stairAscentSpeedSampleFrequency=_stairAscentSpeedSampleFrequency;
@property(nonatomic) double stairAscentSpeedStdDev; // @synthesize stairAscentSpeedStdDev=_stairAscentSpeedStdDev;
@property(nonatomic) double stairAscentSpeedMean; // @synthesize stairAscentSpeedMean=_stairAscentSpeedMean;
@property(nonatomic) double sixMinuteWalkTestDistanceSampleFrequencyStdDev; // @synthesize sixMinuteWalkTestDistanceSampleFrequencyStdDev=_sixMinuteWalkTestDistanceSampleFrequencyStdDev;
@property(nonatomic) double sixMinuteWalkTestDistanceSampleFrequency; // @synthesize sixMinuteWalkTestDistanceSampleFrequency=_sixMinuteWalkTestDistanceSampleFrequency;
@property(nonatomic) double sixMinuteWalkTestDistanceStdDev; // @synthesize sixMinuteWalkTestDistanceStdDev=_sixMinuteWalkTestDistanceStdDev;
@property(nonatomic) double sixMinuteWalkTestDistanceMean; // @synthesize sixMinuteWalkTestDistanceMean=_sixMinuteWalkTestDistanceMean;
@property(nonatomic) double doubleSupportPercentageSampleFrequencyStdDev; // @synthesize doubleSupportPercentageSampleFrequencyStdDev=_doubleSupportPercentageSampleFrequencyStdDev;
@property(nonatomic) double doubleSupportPercentageSampleFrequency; // @synthesize doubleSupportPercentageSampleFrequency=_doubleSupportPercentageSampleFrequency;
@property(nonatomic) double doubleSupportPercentageStdDev; // @synthesize doubleSupportPercentageStdDev=_doubleSupportPercentageStdDev;
@property(nonatomic) double doubleSupportPercentageMean; // @synthesize doubleSupportPercentageMean=_doubleSupportPercentageMean;
@property(nonatomic) double asymmetryPercentageSampleFrequencyStdDev; // @synthesize asymmetryPercentageSampleFrequencyStdDev=_asymmetryPercentageSampleFrequencyStdDev;
@property(nonatomic) double asymmetryPercentageSampleFrequency; // @synthesize asymmetryPercentageSampleFrequency=_asymmetryPercentageSampleFrequency;
@property(nonatomic) double asymmetryPercentageStdDev; // @synthesize asymmetryPercentageStdDev=_asymmetryPercentageStdDev;
@property(nonatomic) double asymmetryPercentageMean; // @synthesize asymmetryPercentageMean=_asymmetryPercentageMean;
@property(nonatomic) double stepLengthSampleFrequencyStdDev; // @synthesize stepLengthSampleFrequencyStdDev=_stepLengthSampleFrequencyStdDev;
@property(nonatomic) double stepLengthSampleFrequency; // @synthesize stepLengthSampleFrequency=_stepLengthSampleFrequency;
@property(nonatomic) double stepLengthStdDev; // @synthesize stepLengthStdDev=_stepLengthStdDev;
@property(nonatomic) double stepLengthMean; // @synthesize stepLengthMean=_stepLengthMean;
@property(nonatomic) double walkingSpeedSampleFrequencyStdDev; // @synthesize walkingSpeedSampleFrequencyStdDev=_walkingSpeedSampleFrequencyStdDev;
@property(nonatomic) double walkingSpeedSampleFrequency; // @synthesize walkingSpeedSampleFrequency=_walkingSpeedSampleFrequency;
@property(nonatomic) double walkingSpeedStdDev; // @synthesize walkingSpeedStdDev=_walkingSpeedStdDev;
@property(nonatomic) double walkingSpeedMean; // @synthesize walkingSpeedMean=_walkingSpeedMean;
@property(nonatomic) double rehabLogarithmicConstant; // @synthesize rehabLogarithmicConstant=_rehabLogarithmicConstant;
@property(nonatomic) double flightsClimbedSampleFrequencyStdDev; // @synthesize flightsClimbedSampleFrequencyStdDev=_flightsClimbedSampleFrequencyStdDev;
@property(nonatomic) double flightsClimbedSampleFrequency; // @synthesize flightsClimbedSampleFrequency=_flightsClimbedSampleFrequency;
@property(nonatomic) double flightsClimbedSampleTime; // @synthesize flightsClimbedSampleTime=_flightsClimbedSampleTime;
@property(nonatomic) double flightsClimbedStdDev; // @synthesize flightsClimbedStdDev=_flightsClimbedStdDev;
@property(nonatomic) double flightsClimbedDailyMean; // @synthesize flightsClimbedDailyMean=_flightsClimbedDailyMean;
@property(nonatomic) double exercisePostDietWeeklyWorkoutsStdDev; // @synthesize exercisePostDietWeeklyWorkoutsStdDev=_exercisePostDietWeeklyWorkoutsStdDev;
@property(nonatomic) double exercisePostDietWeeklyWorkoutsMean; // @synthesize exercisePostDietWeeklyWorkoutsMean=_exercisePostDietWeeklyWorkoutsMean;
@property(nonatomic) double exerciseWeeklyWorkoutsStdDev; // @synthesize exerciseWeeklyWorkoutsStdDev=_exerciseWeeklyWorkoutsStdDev;
@property(nonatomic) double exerciseWeeklyWorkoutsMean; // @synthesize exerciseWeeklyWorkoutsMean=_exerciseWeeklyWorkoutsMean;
@property(retain, nonatomic) NSDictionary *workoutPrototypesByCalendarDay; // @synthesize workoutPrototypesByCalendarDay=_workoutPrototypesByCalendarDay;
@property(nonatomic) double exerciseIntensityPercentage; // @synthesize exerciseIntensityPercentage=_exerciseIntensityPercentage;
@property(nonatomic) double exerciseStopTimeStdDev; // @synthesize exerciseStopTimeStdDev=_exerciseStopTimeStdDev;
@property(nonatomic) double exerciseStartTimeStdDev; // @synthesize exerciseStartTimeStdDev=_exerciseStartTimeStdDev;
@property(nonatomic) double exerciseCooldownTime; // @synthesize exerciseCooldownTime=_exerciseCooldownTime;
@property(nonatomic) double exerciseStopTime; // @synthesize exerciseStopTime=_exerciseStopTime;
@property(nonatomic) double exerciseStartTime; // @synthesize exerciseStartTime=_exerciseStartTime;
@property(nonatomic) double swimmingStrokesPerYard; // @synthesize swimmingStrokesPerYard=_swimmingStrokesPerYard;
@property(nonatomic) double moveGoal; // @synthesize moveGoal=_moveGoal;
@property(nonatomic) double exerciseTimeSampleFrequency; // @synthesize exerciseTimeSampleFrequency=_exerciseTimeSampleFrequency;
@property(nonatomic) double sedentarySampleFrequency; // @synthesize sedentarySampleFrequency=_sedentarySampleFrequency;
@property(nonatomic) double stepsSampleFrequencyDuringExercise; // @synthesize stepsSampleFrequencyDuringExercise=_stepsSampleFrequencyDuringExercise;
@property(nonatomic) double stepsSampleFrequency; // @synthesize stepsSampleFrequency=_stepsSampleFrequency;
@property(nonatomic) double restingCaloriesSampleFrequency; // @synthesize restingCaloriesSampleFrequency=_restingCaloriesSampleFrequency;
@property(nonatomic) double activeCaloriesSampleFrequency; // @synthesize activeCaloriesSampleFrequency=_activeCaloriesSampleFrequency;
@property(nonatomic) double handwashingSampleFrequencyStdDev; // @synthesize handwashingSampleFrequencyStdDev=_handwashingSampleFrequencyStdDev;
@property(nonatomic) double handwashingSampleFrequency; // @synthesize handwashingSampleFrequency=_handwashingSampleFrequency;
@property(nonatomic) double handwashingDurationMeanStdDev; // @synthesize handwashingDurationMeanStdDev=_handwashingDurationMeanStdDev;
@property(nonatomic) double handwashingDurationMean; // @synthesize handwashingDurationMean=_handwashingDurationMean;
@property(nonatomic) double toothbrushingDurationMeanStdDev; // @synthesize toothbrushingDurationMeanStdDev=_toothbrushingDurationMeanStdDev;
@property(nonatomic) double toothbrushingDurationMean; // @synthesize toothbrushingDurationMean=_toothbrushingDurationMean;
@property(nonatomic) long long fitzpatrickSkinTypeScore; // @synthesize fitzpatrickSkinTypeScore=_fitzpatrickSkinTypeScore;
@property(nonatomic) double fitzpatrickSkinTypeSampleTime; // @synthesize fitzpatrickSkinTypeSampleTime=_fitzpatrickSkinTypeSampleTime;
@property(nonatomic) double ovulationIndeterminateProbabilityPercentage; // @synthesize ovulationIndeterminateProbabilityPercentage=_ovulationIndeterminateProbabilityPercentage;
@property(nonatomic) _Bool sexualActivityIsTryingToConceive; // @synthesize sexualActivityIsTryingToConceive=_sexualActivityIsTryingToConceive;
@property(nonatomic) double menstrualPeriodFrequency; // @synthesize menstrualPeriodFrequency=_menstrualPeriodFrequency;
@property(nonatomic) double sexualActivityProtectionDocumentationProbabilityPercentage; // @synthesize sexualActivityProtectionDocumentationProbabilityPercentage=_sexualActivityProtectionDocumentationProbabilityPercentage;
@property(nonatomic) double sexualActivityProtectionProbabilityPercentage; // @synthesize sexualActivityProtectionProbabilityPercentage=_sexualActivityProtectionProbabilityPercentage;
@property(nonatomic) double sexualActivityProbabilityPercentage; // @synthesize sexualActivityProbabilityPercentage=_sexualActivityProbabilityPercentage;
@property(nonatomic) double peripheralPerfusionIndexStdDev; // @synthesize peripheralPerfusionIndexStdDev=_peripheralPerfusionIndexStdDev;
@property(nonatomic) double peripheralPerfusionIndexSampleFrequency; // @synthesize peripheralPerfusionIndexSampleFrequency=_peripheralPerfusionIndexSampleFrequency;
@property(nonatomic) double peripheralPerfusionIndexMean; // @synthesize peripheralPerfusionIndexMean=_peripheralPerfusionIndexMean;
@property(nonatomic) double oxygenSaturationSampleFrequency; // @synthesize oxygenSaturationSampleFrequency=_oxygenSaturationSampleFrequency;
@property(nonatomic) double oxygenSaturationMeasuringSuccessRateDuringSleep; // @synthesize oxygenSaturationMeasuringSuccessRateDuringSleep=_oxygenSaturationMeasuringSuccessRateDuringSleep;
@property(nonatomic) double oxygenSaturationMeasuringSuccessRate; // @synthesize oxygenSaturationMeasuringSuccessRate=_oxygenSaturationMeasuringSuccessRate;
@property(nonatomic) double oxygenSaturationStdDevAtElevation; // @synthesize oxygenSaturationStdDevAtElevation=_oxygenSaturationStdDevAtElevation;
@property(nonatomic) double oxygenSaturationMeanAtElevation; // @synthesize oxygenSaturationMeanAtElevation=_oxygenSaturationMeanAtElevation;
@property(nonatomic) double oxygenSaturationStdDev; // @synthesize oxygenSaturationStdDev=_oxygenSaturationStdDev;
@property(nonatomic) double oxygenSaturationMean; // @synthesize oxygenSaturationMean=_oxygenSaturationMean;
@property(nonatomic) double bodyTempSampleNoiseStdDev; // @synthesize bodyTempSampleNoiseStdDev=_bodyTempSampleNoiseStdDev;
@property(nonatomic) double bodyTempSampleFrequency; // @synthesize bodyTempSampleFrequency=_bodyTempSampleFrequency;
@property(nonatomic) double bodyTempExerciseMultiplier; // @synthesize bodyTempExerciseMultiplier=_bodyTempExerciseMultiplier;
@property(nonatomic) double bodyTempFeverMultiplier; // @synthesize bodyTempFeverMultiplier=_bodyTempFeverMultiplier;
@property(nonatomic) double restingDiastolicBloodPressureSampleNoiseStdDev; // @synthesize restingDiastolicBloodPressureSampleNoiseStdDev=_restingDiastolicBloodPressureSampleNoiseStdDev;
@property(nonatomic) double restingSystolicBloodPressureSampleNoiseStdDev; // @synthesize restingSystolicBloodPressureSampleNoiseStdDev=_restingSystolicBloodPressureSampleNoiseStdDev;
@property(nonatomic) long long restingDiastolicBloodPressure; // @synthesize restingDiastolicBloodPressure=_restingDiastolicBloodPressure;
@property(nonatomic) long long restingSystolicBloodPressure; // @synthesize restingSystolicBloodPressure=_restingSystolicBloodPressure;
@property(nonatomic) double bloodPressureSampleFrequency; // @synthesize bloodPressureSampleFrequency=_bloodPressureSampleFrequency;
@property(nonatomic) double restingRespirationRateSampleNoiseStdDev; // @synthesize restingRespirationRateSampleNoiseStdDev=_restingRespirationRateSampleNoiseStdDev;
@property(nonatomic) double restingRespirationRateSampleFrequency; // @synthesize restingRespirationRateSampleFrequency=_restingRespirationRateSampleFrequency;
@property(nonatomic) long long restingRespirationRate; // @synthesize restingRespirationRate=_restingRespirationRate;
@property(nonatomic) double vo2MaxSampleTimeNoiseStdDev; // @synthesize vo2MaxSampleTimeNoiseStdDev=_vo2MaxSampleTimeNoiseStdDev;
@property(nonatomic) double vo2MaxValueMaxTotalDifference; // @synthesize vo2MaxValueMaxTotalDifference=_vo2MaxValueMaxTotalDifference;
@property(nonatomic) double vo2MaxValueMaxConsecutiveDifference; // @synthesize vo2MaxValueMaxConsecutiveDifference=_vo2MaxValueMaxConsecutiveDifference;
@property(nonatomic) double vo2MaxValueStdDev; // @synthesize vo2MaxValueStdDev=_vo2MaxValueStdDev;
@property(nonatomic) double heartRateSampleNoiseStdDev; // @synthesize heartRateSampleNoiseStdDev=_heartRateSampleNoiseStdDev;
@property(nonatomic) double heartRateSampleFrequencyStdDev; // @synthesize heartRateSampleFrequencyStdDev=_heartRateSampleFrequencyStdDev;
@property(nonatomic) double heartRateSampleFrequency; // @synthesize heartRateSampleFrequency=_heartRateSampleFrequency;
@property(nonatomic) long long walkingHeartRateAverageMaxTotalDifference; // @synthesize walkingHeartRateAverageMaxTotalDifference=_walkingHeartRateAverageMaxTotalDifference;
@property(nonatomic) long long walkingHeartRateAverageMaxDailyDifference; // @synthesize walkingHeartRateAverageMaxDailyDifference=_walkingHeartRateAverageMaxDailyDifference;
@property(nonatomic) long long walkingHeartRateAverage; // @synthesize walkingHeartRateAverage=_walkingHeartRateAverage;
@property(nonatomic) long long restingHeartRateMaxTotalDifference; // @synthesize restingHeartRateMaxTotalDifference=_restingHeartRateMaxTotalDifference;
@property(nonatomic) long long restingHeartRateMaxDailyDifference; // @synthesize restingHeartRateMaxDailyDifference=_restingHeartRateMaxDailyDifference;
@property(nonatomic) long long restingHeartRate; // @synthesize restingHeartRate=_restingHeartRate;
@property(retain, nonatomic) NSArray *weightGainHolidayDaysInYear; // @synthesize weightGainHolidayDaysInYear=_weightGainHolidayDaysInYear;
@property(nonatomic) double weightChangePercentageMax; // @synthesize weightChangePercentageMax=_weightChangePercentageMax;
@property(nonatomic) double weightDailyMaxLoss; // @synthesize weightDailyMaxLoss=_weightDailyMaxLoss;
@property(nonatomic) double weightDailyChangeStdDev; // @synthesize weightDailyChangeStdDev=_weightDailyChangeStdDev;
@property(nonatomic) double weightLossStartDay; // @synthesize weightLossStartDay=_weightLossStartDay;
@property(nonatomic) double weightSampleNoiseStdDev; // @synthesize weightSampleNoiseStdDev=_weightSampleNoiseStdDev;
@property(nonatomic) double weightSampleTimeFrequency; // @synthesize weightSampleTimeFrequency=_weightSampleTimeFrequency;
@property(nonatomic) double weightTargetInKg; // @synthesize weightTargetInKg=_weightTargetInKg;
@property(nonatomic) double weightSampleTime; // @synthesize weightSampleTime=_weightSampleTime;
@property(nonatomic) double heightSampleNoiseStdDev; // @synthesize heightSampleNoiseStdDev=_heightSampleNoiseStdDev;
@property(nonatomic) double heightSampleTimeFrequency; // @synthesize heightSampleTimeFrequency=_heightSampleTimeFrequency;
@property(nonatomic) double heightTargetInCm; // @synthesize heightTargetInCm=_heightTargetInCm;
@property(nonatomic) double heightSampleTime; // @synthesize heightSampleTime=_heightSampleTime;
@property(nonatomic) double hipCircumferenceInInches; // @synthesize hipCircumferenceInInches=_hipCircumferenceInInches;
@property(nonatomic) double forearmCircumferenceInInches; // @synthesize forearmCircumferenceInInches=_forearmCircumferenceInInches;
@property(nonatomic) double wristCircumferenceInInches; // @synthesize wristCircumferenceInInches=_wristCircumferenceInInches;
@property(nonatomic) double waistCircumferenceInInches; // @synthesize waistCircumferenceInInches=_waistCircumferenceInInches;
@property(nonatomic) double uvIndexSampleFrequency; // @synthesize uvIndexSampleFrequency=_uvIndexSampleFrequency;
@property(nonatomic) long long profileType; // @synthesize profileType=_profileType;
@property(nonatomic) _Bool createHighFidelityData; // @synthesize createHighFidelityData=_createHighFidelityData;
@property(nonatomic) double genericSampleTimeNoiseStdDev; // @synthesize genericSampleTimeNoiseStdDev=_genericSampleTimeNoiseStdDev;
@property(nonatomic) double sunsetTime; // @synthesize sunsetTime=_sunsetTime;
@property(nonatomic) double dawnTime; // @synthesize dawnTime=_dawnTime;
@property(nonatomic) double timeIncrementDuringExercise; // @synthesize timeIncrementDuringExercise=_timeIncrementDuringExercise;
@property(nonatomic) double timeIncrement; // @synthesize timeIncrement=_timeIncrement;
@property(nonatomic) long long fitzpatrickSkinType; // @synthesize fitzpatrickSkinType=_fitzpatrickSkinType;
@property(nonatomic) long long bloodType; // @synthesize bloodType=_bloodType;
@property(nonatomic) long long biologicalSex; // @synthesize biologicalSex=_biologicalSex;
@property(retain, nonatomic) NSDate *birthDate; // @synthesize birthDate=_birthDate;
@property(retain, nonatomic) NSDateComponents *birthDateComponents; // @synthesize birthDateComponents=_birthDateComponents;
@property(copy, nonatomic) NSString *personDescription; // @synthesize personDescription=_personDescription;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void)updateMedicalIDData;
- (void)setHighFidelityGeneration:(_Bool)arg1;
- (void)applyProfileType:(long long)arg1;
- (id)fullName;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 description:(id)arg3 birthDateComponents:(id)arg4 biologicalSex:(long long)arg5;

@end

