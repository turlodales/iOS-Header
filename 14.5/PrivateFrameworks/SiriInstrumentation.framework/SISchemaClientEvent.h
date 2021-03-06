//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriInstrumentation/SISchemaTopLevelUnionType.h>

@class NSData, SISchemaAudioFirstBufferRecorded, SISchemaAudioStopRecording, SISchemaAudioStopRecordingStarted, SISchemaCarPlayHeadUnitContext, SISchemaCasinoRelationship, SISchemaClientEventMetadata, SISchemaClientFlow, SISchemaClientTransportEventMetadata, SISchemaConversationTrace, SISchemaDeviceDynamicContext, SISchemaDeviceFixedContext, SISchemaDeviceLockStateChanged, SISchemaDialogOutput, SISchemaDictationAlternativeSelected, SISchemaDictationAlternativesViewed, SISchemaDictationContext, SISchemaDictationEndPointCancel, SISchemaDictationEndPointStop, SISchemaDictationTranscriptionMetadata, SISchemaIntercomMessageRecorded, SISchemaInvocation, SISchemaKeyboardDismissed, SISchemaLocation, SISchemaPNRFatalError, SISchemaPNRSpeechRecognitionSourceContext, SISchemaPNRTextToSpeechRequestReceived, SISchemaPunchOut, SISchemaSiriCue, SISchemaSpeechTranscription, SISchemaTextToSpeechBegin, SISchemaTextToSpeechEnd, SISchemaTurnMTERequest, SISchemaUEILaunchContext, SISchemaUEIRequestCategorization, SISchemaUEIUIRenderingContext, SISchemaUEIUUFRReady, SISchemaUEIUserSpeakingContext, SISchemaUIStateTransition, SISchemaUUFRCompletion, SISchemaUUFRFatalError, SISchemaUUFRPresented, SISchemaUUFRSaid, SISchemaUUFRShown, SISchemaUserViewRegionInteraction;

@interface SISchemaClientEvent : SISchemaTopLevelUnionType
{
    SISchemaClientEventMetadata *_eventMetadata;
    SISchemaClientTransportEventMetadata *_transportMetadata;
    SISchemaAudioFirstBufferRecorded *_audioFirstBufferRecorded;
    SISchemaAudioStopRecording *_audioStopRecording;
    SISchemaConversationTrace *_clientConversationTrace;
    SISchemaDeviceDynamicContext *_deviceDynamicContext;
    SISchemaDeviceFixedContext *_deviceFixedContext;
    SISchemaDictationContext *_dictationContext;
    SISchemaInvocation *_invocation;
    SISchemaLocation *_location;
    SISchemaPunchOut *_punchOut;
    SISchemaSiriCue *_siriCue;
    SISchemaUUFRPresented *_uufrPresented;
    SISchemaSpeechTranscription *_speechTranscription;
    SISchemaTextToSpeechBegin *_textToSpeechBegin;
    SISchemaTextToSpeechEnd *_textToSpeechEnd;
    SISchemaUIStateTransition *_uiStateTransition;
    SISchemaClientFlow *_clientFlow;
    SISchemaDialogOutput *_dialogOutput;
    SISchemaDictationEndPointStop *_dictationEndPointStop;
    SISchemaDictationEndPointCancel *_dictationEndPointCancel;
    SISchemaDictationAlternativeSelected *_dictationAlternativeSelected;
    SISchemaDictationTranscriptionMetadata *_dictationTranscriptionMetadata;
    SISchemaCarPlayHeadUnitContext *_carPlayHeadUnitContext;
    SISchemaUUFRCompletion *_uufrCompletion;
    SISchemaUUFRShown *_uufrShown;
    SISchemaUUFRSaid *_uufrSaid;
    SISchemaUUFRFatalError *_uufrFatalError;
    SISchemaDictationAlternativesViewed *_dictationAlternativesViewed;
    SISchemaIntercomMessageRecorded *_intercomMessageRecorded;
    SISchemaCasinoRelationship *_casinoRelationship;
    SISchemaUserViewRegionInteraction *_userViewRegionInteraction;
    SISchemaDeviceLockStateChanged *_deviceLockStateChanged;
    SISchemaUEIRequestCategorization *_ueiRequestCategorization;
    SISchemaAudioStopRecordingStarted *_audioStopRecordingStarted;
    SISchemaUEILaunchContext *_ueiLaunchContext;
    SISchemaUEIUserSpeakingContext *_ueiUserSpeakingContext;
    SISchemaUEIUUFRReady *_ueiUUFRReady;
    SISchemaUEIUIRenderingContext *_ueiUIRenderingContext;
    SISchemaPNRTextToSpeechRequestReceived *_pnrTextToSpeechRequestReceived;
    SISchemaPNRSpeechRecognitionSourceContext *_pnrSpeechRecognitionSourceContext;
    SISchemaPNRFatalError *_pnrFatalError;
    SISchemaTurnMTERequest *_turnMTERequest;
    SISchemaKeyboardDismissed *_keyboardDismissed;
    _Bool _hasEventMetadata;
    _Bool _hasTransportMetadata;
    _Bool _hasAudioFirstBufferRecorded;
    _Bool _hasAudioStopRecording;
    _Bool _hasClientConversationTrace;
    _Bool _hasDeviceDynamicContext;
    _Bool _hasDeviceFixedContext;
    _Bool _hasDictationContext;
    _Bool _hasInvocation;
    _Bool _hasLocation;
    _Bool _hasPunchOut;
    _Bool _hasSiriCue;
    _Bool _hasUufrPresented;
    _Bool _hasSpeechTranscription;
    _Bool _hasTextToSpeechBegin;
    _Bool _hasTextToSpeechEnd;
    _Bool _hasUiStateTransition;
    _Bool _hasClientFlow;
    _Bool _hasDialogOutput;
    _Bool _hasDictationEndPointStop;
    _Bool _hasDictationEndPointCancel;
    _Bool _hasDictationAlternativeSelected;
    _Bool _hasDictationTranscriptionMetadata;
    _Bool _hasCarPlayHeadUnitContext;
    _Bool _hasUufrCompletion;
    _Bool _hasUufrShown;
    _Bool _hasUufrSaid;
    _Bool _hasUufrFatalError;
    _Bool _hasDictationAlternativesViewed;
    _Bool _hasIntercomMessageRecorded;
    _Bool _hasCasinoRelationship;
    _Bool _hasUserViewRegionInteraction;
    _Bool _hasDeviceLockStateChanged;
    _Bool _hasUeiRequestCategorization;
    _Bool _hasAudioStopRecordingStarted;
    _Bool _hasUeiLaunchContext;
    _Bool _hasUeiUserSpeakingContext;
    _Bool _hasUeiUUFRReady;
    _Bool _hasUeiUIRenderingContext;
    _Bool _hasPnrTextToSpeechRequestReceived;
    _Bool _hasPnrSpeechRecognitionSourceContext;
    _Bool _hasPnrFatalError;
    _Bool _hasTurnMTERequest;
    _Bool _hasKeyboardDismissed;
    unsigned long long _whichEvent_Type;
}

+ (id)getTagForEventTypeClass:(Class)arg1;
+ (Class)getEventTypeClassForTag:(int)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasKeyboardDismissed; // @synthesize hasKeyboardDismissed=_hasKeyboardDismissed;
@property(nonatomic) _Bool hasTurnMTERequest; // @synthesize hasTurnMTERequest=_hasTurnMTERequest;
@property(nonatomic) _Bool hasPnrFatalError; // @synthesize hasPnrFatalError=_hasPnrFatalError;
@property(nonatomic) _Bool hasPnrSpeechRecognitionSourceContext; // @synthesize hasPnrSpeechRecognitionSourceContext=_hasPnrSpeechRecognitionSourceContext;
@property(nonatomic) _Bool hasPnrTextToSpeechRequestReceived; // @synthesize hasPnrTextToSpeechRequestReceived=_hasPnrTextToSpeechRequestReceived;
@property(nonatomic) _Bool hasUeiUIRenderingContext; // @synthesize hasUeiUIRenderingContext=_hasUeiUIRenderingContext;
@property(nonatomic) _Bool hasUeiUUFRReady; // @synthesize hasUeiUUFRReady=_hasUeiUUFRReady;
@property(nonatomic) _Bool hasUeiUserSpeakingContext; // @synthesize hasUeiUserSpeakingContext=_hasUeiUserSpeakingContext;
@property(nonatomic) _Bool hasUeiLaunchContext; // @synthesize hasUeiLaunchContext=_hasUeiLaunchContext;
@property(nonatomic) _Bool hasAudioStopRecordingStarted; // @synthesize hasAudioStopRecordingStarted=_hasAudioStopRecordingStarted;
@property(nonatomic) _Bool hasUeiRequestCategorization; // @synthesize hasUeiRequestCategorization=_hasUeiRequestCategorization;
@property(nonatomic) _Bool hasDeviceLockStateChanged; // @synthesize hasDeviceLockStateChanged=_hasDeviceLockStateChanged;
@property(nonatomic) _Bool hasUserViewRegionInteraction; // @synthesize hasUserViewRegionInteraction=_hasUserViewRegionInteraction;
@property(nonatomic) _Bool hasCasinoRelationship; // @synthesize hasCasinoRelationship=_hasCasinoRelationship;
@property(nonatomic) _Bool hasIntercomMessageRecorded; // @synthesize hasIntercomMessageRecorded=_hasIntercomMessageRecorded;
@property(nonatomic) _Bool hasDictationAlternativesViewed; // @synthesize hasDictationAlternativesViewed=_hasDictationAlternativesViewed;
@property(nonatomic) _Bool hasUufrFatalError; // @synthesize hasUufrFatalError=_hasUufrFatalError;
@property(nonatomic) _Bool hasUufrSaid; // @synthesize hasUufrSaid=_hasUufrSaid;
@property(nonatomic) _Bool hasUufrShown; // @synthesize hasUufrShown=_hasUufrShown;
@property(nonatomic) _Bool hasUufrCompletion; // @synthesize hasUufrCompletion=_hasUufrCompletion;
@property(nonatomic) _Bool hasCarPlayHeadUnitContext; // @synthesize hasCarPlayHeadUnitContext=_hasCarPlayHeadUnitContext;
@property(nonatomic) _Bool hasDictationTranscriptionMetadata; // @synthesize hasDictationTranscriptionMetadata=_hasDictationTranscriptionMetadata;
@property(nonatomic) _Bool hasDictationAlternativeSelected; // @synthesize hasDictationAlternativeSelected=_hasDictationAlternativeSelected;
@property(nonatomic) _Bool hasDictationEndPointCancel; // @synthesize hasDictationEndPointCancel=_hasDictationEndPointCancel;
@property(nonatomic) _Bool hasDictationEndPointStop; // @synthesize hasDictationEndPointStop=_hasDictationEndPointStop;
@property(nonatomic) _Bool hasDialogOutput; // @synthesize hasDialogOutput=_hasDialogOutput;
@property(nonatomic) _Bool hasClientFlow; // @synthesize hasClientFlow=_hasClientFlow;
@property(nonatomic) _Bool hasUiStateTransition; // @synthesize hasUiStateTransition=_hasUiStateTransition;
@property(nonatomic) _Bool hasTextToSpeechEnd; // @synthesize hasTextToSpeechEnd=_hasTextToSpeechEnd;
@property(nonatomic) _Bool hasTextToSpeechBegin; // @synthesize hasTextToSpeechBegin=_hasTextToSpeechBegin;
@property(nonatomic) _Bool hasSpeechTranscription; // @synthesize hasSpeechTranscription=_hasSpeechTranscription;
@property(nonatomic) _Bool hasUufrPresented; // @synthesize hasUufrPresented=_hasUufrPresented;
@property(nonatomic) _Bool hasSiriCue; // @synthesize hasSiriCue=_hasSiriCue;
@property(nonatomic) _Bool hasPunchOut; // @synthesize hasPunchOut=_hasPunchOut;
@property(nonatomic) _Bool hasLocation; // @synthesize hasLocation=_hasLocation;
@property(nonatomic) _Bool hasInvocation; // @synthesize hasInvocation=_hasInvocation;
@property(nonatomic) _Bool hasDictationContext; // @synthesize hasDictationContext=_hasDictationContext;
@property(nonatomic) _Bool hasDeviceFixedContext; // @synthesize hasDeviceFixedContext=_hasDeviceFixedContext;
@property(nonatomic) _Bool hasDeviceDynamicContext; // @synthesize hasDeviceDynamicContext=_hasDeviceDynamicContext;
@property(nonatomic) _Bool hasClientConversationTrace; // @synthesize hasClientConversationTrace=_hasClientConversationTrace;
@property(nonatomic) _Bool hasAudioStopRecording; // @synthesize hasAudioStopRecording=_hasAudioStopRecording;
@property(nonatomic) _Bool hasAudioFirstBufferRecorded; // @synthesize hasAudioFirstBufferRecorded=_hasAudioFirstBufferRecorded;
@property(nonatomic) _Bool hasTransportMetadata; // @synthesize hasTransportMetadata=_hasTransportMetadata;
@property(nonatomic) _Bool hasEventMetadata; // @synthesize hasEventMetadata=_hasEventMetadata;
@property(retain, nonatomic) SISchemaClientTransportEventMetadata *transportMetadata; // @synthesize transportMetadata=_transportMetadata;
@property(retain, nonatomic) SISchemaClientEventMetadata *eventMetadata; // @synthesize eventMetadata=_eventMetadata;
@property(readonly, nonatomic) unsigned long long whichEvent_Type; // @synthesize whichEvent_Type=_whichEvent_Type;
- (id)getEventType;
- (void)setEventType:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(retain, nonatomic) SISchemaKeyboardDismissed *keyboardDismissed; // @synthesize keyboardDismissed=_keyboardDismissed;
@property(retain, nonatomic) SISchemaTurnMTERequest *turnMTERequest; // @synthesize turnMTERequest=_turnMTERequest;
@property(retain, nonatomic) SISchemaPNRFatalError *pnrFatalError; // @synthesize pnrFatalError=_pnrFatalError;
@property(retain, nonatomic) SISchemaPNRSpeechRecognitionSourceContext *pnrSpeechRecognitionSourceContext; // @synthesize pnrSpeechRecognitionSourceContext=_pnrSpeechRecognitionSourceContext;
@property(retain, nonatomic) SISchemaPNRTextToSpeechRequestReceived *pnrTextToSpeechRequestReceived; // @synthesize pnrTextToSpeechRequestReceived=_pnrTextToSpeechRequestReceived;
@property(retain, nonatomic) SISchemaUEIUIRenderingContext *ueiUIRenderingContext; // @synthesize ueiUIRenderingContext=_ueiUIRenderingContext;
@property(retain, nonatomic) SISchemaUEIUUFRReady *ueiUUFRReady; // @synthesize ueiUUFRReady=_ueiUUFRReady;
@property(retain, nonatomic) SISchemaUEIUserSpeakingContext *ueiUserSpeakingContext; // @synthesize ueiUserSpeakingContext=_ueiUserSpeakingContext;
@property(retain, nonatomic) SISchemaUEILaunchContext *ueiLaunchContext; // @synthesize ueiLaunchContext=_ueiLaunchContext;
@property(retain, nonatomic) SISchemaAudioStopRecordingStarted *audioStopRecordingStarted; // @synthesize audioStopRecordingStarted=_audioStopRecordingStarted;
@property(retain, nonatomic) SISchemaUEIRequestCategorization *ueiRequestCategorization; // @synthesize ueiRequestCategorization=_ueiRequestCategorization;
@property(retain, nonatomic) SISchemaDeviceLockStateChanged *deviceLockStateChanged; // @synthesize deviceLockStateChanged=_deviceLockStateChanged;
@property(retain, nonatomic) SISchemaUserViewRegionInteraction *userViewRegionInteraction; // @synthesize userViewRegionInteraction=_userViewRegionInteraction;
@property(retain, nonatomic) SISchemaCasinoRelationship *casinoRelationship; // @synthesize casinoRelationship=_casinoRelationship;
@property(retain, nonatomic) SISchemaIntercomMessageRecorded *intercomMessageRecorded; // @synthesize intercomMessageRecorded=_intercomMessageRecorded;
@property(retain, nonatomic) SISchemaDictationAlternativesViewed *dictationAlternativesViewed; // @synthesize dictationAlternativesViewed=_dictationAlternativesViewed;
@property(retain, nonatomic) SISchemaUUFRFatalError *uufrFatalError; // @synthesize uufrFatalError=_uufrFatalError;
@property(retain, nonatomic) SISchemaUUFRSaid *uufrSaid; // @synthesize uufrSaid=_uufrSaid;
@property(retain, nonatomic) SISchemaUUFRShown *uufrShown; // @synthesize uufrShown=_uufrShown;
@property(retain, nonatomic) SISchemaUUFRCompletion *uufrCompletion; // @synthesize uufrCompletion=_uufrCompletion;
@property(retain, nonatomic) SISchemaCarPlayHeadUnitContext *carPlayHeadUnitContext; // @synthesize carPlayHeadUnitContext=_carPlayHeadUnitContext;
@property(retain, nonatomic) SISchemaDictationTranscriptionMetadata *dictationTranscriptionMetadata; // @synthesize dictationTranscriptionMetadata=_dictationTranscriptionMetadata;
@property(retain, nonatomic) SISchemaDictationAlternativeSelected *dictationAlternativeSelected; // @synthesize dictationAlternativeSelected=_dictationAlternativeSelected;
@property(retain, nonatomic) SISchemaDictationEndPointCancel *dictationEndPointCancel; // @synthesize dictationEndPointCancel=_dictationEndPointCancel;
@property(retain, nonatomic) SISchemaDictationEndPointStop *dictationEndPointStop; // @synthesize dictationEndPointStop=_dictationEndPointStop;
@property(retain, nonatomic) SISchemaDialogOutput *dialogOutput; // @synthesize dialogOutput=_dialogOutput;
@property(retain, nonatomic) SISchemaClientFlow *clientFlow; // @synthesize clientFlow=_clientFlow;
@property(retain, nonatomic) SISchemaUIStateTransition *uiStateTransition; // @synthesize uiStateTransition=_uiStateTransition;
@property(retain, nonatomic) SISchemaTextToSpeechEnd *textToSpeechEnd; // @synthesize textToSpeechEnd=_textToSpeechEnd;
@property(retain, nonatomic) SISchemaTextToSpeechBegin *textToSpeechBegin; // @synthesize textToSpeechBegin=_textToSpeechBegin;
@property(retain, nonatomic) SISchemaSpeechTranscription *speechTranscription; // @synthesize speechTranscription=_speechTranscription;
@property(retain, nonatomic) SISchemaUUFRPresented *uufrPresented; // @synthesize uufrPresented=_uufrPresented;
@property(retain, nonatomic) SISchemaSiriCue *siriCue; // @synthesize siriCue=_siriCue;
@property(retain, nonatomic) SISchemaPunchOut *punchOut; // @synthesize punchOut=_punchOut;
@property(retain, nonatomic) SISchemaLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) SISchemaInvocation *invocation; // @synthesize invocation=_invocation;
@property(retain, nonatomic) SISchemaDictationContext *dictationContext; // @synthesize dictationContext=_dictationContext;
@property(retain, nonatomic) SISchemaDeviceFixedContext *deviceFixedContext; // @synthesize deviceFixedContext=_deviceFixedContext;
@property(retain, nonatomic) SISchemaDeviceDynamicContext *deviceDynamicContext; // @synthesize deviceDynamicContext=_deviceDynamicContext;
@property(retain, nonatomic) SISchemaConversationTrace *clientConversationTrace; // @synthesize clientConversationTrace=_clientConversationTrace;
@property(retain, nonatomic) SISchemaAudioStopRecording *audioStopRecording; // @synthesize audioStopRecording=_audioStopRecording;
@property(retain, nonatomic) SISchemaAudioFirstBufferRecorded *audioFirstBufferRecorded; // @synthesize audioFirstBufferRecorded=_audioFirstBufferRecorded;
- (int)getAnyEventType;

@end

