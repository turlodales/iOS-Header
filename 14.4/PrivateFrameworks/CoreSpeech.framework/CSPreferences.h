//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSPreferences : NSObject
{
}

+ (id)sharedPreferences;
- (_Bool)runningVoiceTriggerOnMac;
- (_Bool)isSelfTriggerFileLoggingEnabled;
- (_Bool)isStaggeredCATDownloadEnabled;
- (_Bool)isAdBlockerAudioLoggingEnabled;
- (_Bool)isMultiChannelAudioLoggingEnabled;
- (_Bool)isMultiPhraseVTEnabled;
- (_Bool)bypassPersonalizedHeySiri;
- (_Bool)opportuneSpeakListenerBypassEnabled;
- (_Bool)companionSyncVoiceTriggerUtterancesEnabled;
- (id)fakeHearstModelPath;
- (void)setHearstSecondPassModelVersion:(id)arg1;
- (void)setHearstFirstPassModelVersion:(id)arg1;
- (float)overwritingRemoteVADScore;
- (_Bool)shouldOverwriteRemoteVADScore;
- (_Bool)iOSBargeInSupportEnabled;
- (_Bool)useSiriActivationSPIForwatchOS;
- (_Bool)useSiriActivationSPIForHomePod;
- (unsigned long long)maxNumGradingFiles;
- (unsigned long long)maxNumLoggingFiles;
- (double)audioSessionActivationDelay;
- (_Bool)smartSiriVolumeContextAwareEnabled;
- (_Bool)smartSiriVolumeContextAwareLoggingEnabled;
- (_Bool)smartSiriVolumeSoftVolumeEnabled;
- (unsigned long long)speakerIdScoreReportingType;
- (_Bool)isSpeakerRecognitionAvailable;
- (_Bool)_isRemoteVoiceTriggerAvailable;
- (_Bool)isPHSSupported;
- (id)audioInjectionFilePath;
- (void)setAudioInjectionFilePath:(id)arg1;
- (_Bool)audioInjectionEnabledWithKey:(struct __CFString *)arg1;
- (_Bool)enableAudioInjection:(_Bool)arg1 withKey:(struct __CFString *)arg2;
- (_Bool)programmableAudioInjectionEnabled;
- (_Bool)enableProgrammableAudioInjection:(_Bool)arg1;
- (_Bool)audioInjectionEnabled;
- (_Bool)enableAudioInjection:(_Bool)arg1;
- (_Bool)myriadFileLoggingEnabled;
- (id)interstitialAbsoluteDirForLevel:(long long)arg1;
- (id)interstitialRelativeDirForLevel:(long long)arg1;
- (double)remoteVoiceTriggerEndpointTimeoutWithDefault:(double)arg1;
- (double)remoteVoiceTriggerDelayTime;
- (_Bool)_isDirectory:(id)arg1;
- (id)getStartOfSpeechAudioLogFilePath;
- (_Bool)forceVoiceTriggerAOPMode;
- (_Bool)forceVoiceTriggerAPMode;
- (_Bool)startOfSpeechAudioLoggingEnabled;
- (long long)getJarvisTriggerMode;
- (void)setJarvisTriggerMode:(long long)arg1;
- (_Bool)jarvisAudioLoggingEnabled;
- (_Bool)speakerRecognitionAudioLoggingEnabled;
- (_Bool)secondPassAudioLoggingEnabled;
- (id)myriadHashFilePath;
- (id)myriadHashDirectory;
- (id)assistantAudioFileLogDirectory;
- (id)assistantLogDirectory;
- (id)getCatAdBlockerAssetUpdateDirectory;
- (id)trialBaseAssetDirectory;
- (id)getSSVLogFilePathWithSessionIdentifier:(id)arg1;
- (id)ssvLogDirectory;
- (id)voiceTriggerAudioLogDirectory;
- (id)baseDir;
- (void)setFileLoggingLevel:(id)arg1;
- (id)fileLoggingLevel;
- (_Bool)fileLoggingIsEnabled;
- (void)setFileLoggingIsEnabled:(_Bool)arg1;
- (_Bool)_storeModeEnabled;
- (_Bool)twoShotNotificationEnabled;
- (_Bool)voiceTriggerInCoreSpeech;
- (_Bool)isAttentiveSiriAudioLoggingEnabled;
- (_Bool)isAttentiveSiriEnabled;
- (_Bool)phraseSpotterEnabled;
- (_Bool)voiceTriggerEnabled;

@end

