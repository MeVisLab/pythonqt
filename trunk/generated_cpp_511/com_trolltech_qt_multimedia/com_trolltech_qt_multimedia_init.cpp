#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_multimedia0.h"
#include "com_trolltech_qt_multimedia1.h"
#include "com_trolltech_qt_multimedia2.h"
#include "com_trolltech_qt_multimedia3.h"



void PythonQt_init_QtMultimedia(PyObject* module) {
PythonQt::priv()->registerClass(&QAbstractAudioDeviceInfo::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAbstractAudioDeviceInfo>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractAudioDeviceInfo>, module, 0);
PythonQt::priv()->registerClass(&QAbstractAudioInput::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAbstractAudioInput>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractAudioInput>, module, 0);
PythonQt::priv()->registerClass(&QAbstractAudioOutput::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAbstractAudioOutput>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractAudioOutput>, module, 0);
PythonQt::priv()->registerCPPClass("QAbstractVideoBuffer", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAbstractVideoBuffer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractVideoBuffer>, module, 0);
PythonQt::priv()->registerClass(&QAbstractVideoSurface::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAbstractVideoSurface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractVideoSurface>, module, 0);
PythonQt::priv()->registerCPPClass("QAudio", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudio>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QAudioBuffer", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioBuffer>, NULL, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QAudioDecoder::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioDecoder>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioDecoder>, module, 0);
PythonQt::priv()->registerClass(&QAudioDecoderControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioDecoderControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioDecoderControl>, module, 0);
PythonQt::priv()->registerCPPClass("QAudioDeviceInfo", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioDeviceInfo>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QAudioEncoderSettings", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioEncoderSettings>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QAudioEncoderSettingsControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioEncoderSettingsControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioEncoderSettingsControl>, module, 0);
PythonQt::priv()->registerCPPClass("QAudioFormat", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioFormat>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QAudioInput::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioInput>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioInput>, module, 0);
PythonQt::priv()->registerClass(&QAudioInputSelectorControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioInputSelectorControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioInputSelectorControl>, module, 0);
PythonQt::priv()->registerClass(&QAudioOutput::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioOutput>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioOutput>, module, 0);
PythonQt::priv()->registerClass(&QAudioOutputSelectorControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioOutputSelectorControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioOutputSelectorControl>, module, 0);
PythonQt::priv()->registerClass(&QAudioProbe::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioProbe>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioProbe>, module, 0);
PythonQt::priv()->registerClass(&QAudioRecorder::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioRecorder>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioRecorder>, module, 0);
PythonQt::priv()->registerClass(&QAudioRoleControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioRoleControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioRoleControl>, module, 0);
PythonQt::priv()->registerCPPClass("QAudioSystemFactoryInterface", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioSystemFactoryInterface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioSystemFactoryInterface>, module, 0);
PythonQt::priv()->registerClass(&QAudioSystemPlugin::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioSystemPlugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioSystemPlugin>, module, 0);
PythonQt::priv()->registerClass(&QCamera::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCamera>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCamera>, module, 0);
PythonQt::priv()->registerClass(&QCameraCaptureBufferFormatControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraCaptureBufferFormatControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCameraCaptureBufferFormatControl>, module, 0);
PythonQt::priv()->registerClass(&QCameraCaptureDestinationControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraCaptureDestinationControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCameraCaptureDestinationControl>, module, 0);
PythonQt::priv()->registerClass(&QCameraControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCameraControl>, module, 0);
PythonQt::priv()->registerClass(&QCameraExposure::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraExposure>, NULL, module, 0);
PythonQt::priv()->registerClass(&QCameraExposureControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraExposureControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCameraExposureControl>, module, 0);
PythonQt::priv()->registerClass(&QCameraFeedbackControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraFeedbackControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCameraFeedbackControl>, module, 0);
PythonQt::priv()->registerClass(&QCameraFlashControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraFlashControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCameraFlashControl>, module, 0);
PythonQt::priv()->registerClass(&QCameraFocus::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraFocus>, NULL, module, 0);
PythonQt::priv()->registerClass(&QCameraFocusControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraFocusControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCameraFocusControl>, module, 0);
PythonQt::priv()->registerCPPClass("QCameraFocusZone", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraFocusZone>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QCameraImageCapture::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraImageCapture>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCameraImageCapture>, module, 0);
PythonQt::self()->addParentClass("QCameraImageCapture", "QMediaBindableInterface",PythonQtUpcastingOffset<QCameraImageCapture,QMediaBindableInterface>());
PythonQt::priv()->registerClass(&QCameraImageCaptureControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraImageCaptureControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCameraImageCaptureControl>, module, 0);
PythonQt::priv()->registerClass(&QCameraImageProcessing::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraImageProcessing>, NULL, module, 0);
PythonQt::priv()->registerClass(&QCameraImageProcessingControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraImageProcessingControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCameraImageProcessingControl>, module, 0);
PythonQt::priv()->registerCPPClass("QCameraInfo", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraInfo>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QCameraInfoControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraInfoControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCameraInfoControl>, module, 0);
PythonQt::priv()->registerClass(&QCameraLocksControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraLocksControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCameraLocksControl>, module, 0);
PythonQt::priv()->registerClass(&QCameraViewfinder::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraViewfinder>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCameraViewfinder>, module, 0);
PythonQt::priv()->registerCPPClass("QCameraViewfinderSettings", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraViewfinderSettings>, NULL, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QCameraViewfinderSettingsControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraViewfinderSettingsControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCameraViewfinderSettingsControl>, module, 0);
PythonQt::priv()->registerClass(&QCameraViewfinderSettingsControl2::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraViewfinderSettingsControl2>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCameraViewfinderSettingsControl2>, module, 0);
PythonQt::priv()->registerClass(&QCameraZoomControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraZoomControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCameraZoomControl>, module, 0);
PythonQt::priv()->registerCPPClass("QCamera::FrameRateRange", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCamera__FrameRateRange>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCamera__FrameRateRange>, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QGraphicsVideoItem::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QGraphicsVideoItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsVideoItem>, module, 0);
PythonQt::self()->addParentClass("QGraphicsVideoItem", "QMediaBindableInterface",PythonQtUpcastingOffset<QGraphicsVideoItem,QMediaBindableInterface>());
PythonQt::priv()->registerClass(&QImageEncoderControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QImageEncoderControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QImageEncoderControl>, module, 0);
PythonQt::priv()->registerCPPClass("QImageEncoderSettings", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QImageEncoderSettings>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QMediaAudioProbeControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaAudioProbeControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaAudioProbeControl>, module, 0);
PythonQt::priv()->registerClass(&QMediaAvailabilityControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaAvailabilityControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaAvailabilityControl>, module, 0);
PythonQt::priv()->registerCPPClass("QMediaBindableInterface", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaBindableInterface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaBindableInterface>, module, 0);
PythonQt::priv()->registerClass(&QMediaContainerControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaContainerControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaContainerControl>, module, 0);
PythonQt::priv()->registerCPPClass("QMediaContent", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaContent>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QMediaControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaControl>, module, 0);
PythonQt::priv()->registerClass(&QMediaGaplessPlaybackControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaGaplessPlaybackControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaGaplessPlaybackControl>, module, 0);
PythonQt::priv()->registerClass(&QMediaNetworkAccessControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaNetworkAccessControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaNetworkAccessControl>, module, 0);
PythonQt::priv()->registerClass(&QMediaObject::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaObject>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaObject>, module, 0);
PythonQt::priv()->registerClass(&QMediaPlayer::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaPlayer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaPlayer>, module, 0);
PythonQt::priv()->registerClass(&QMediaPlayerControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaPlayerControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaPlayerControl>, module, 0);
PythonQt::priv()->registerClass(&QMediaPlaylist::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaPlaylist>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaPlaylist>, module, PythonQt::Type_NonZero);
PythonQt::self()->addParentClass("QMediaPlaylist", "QMediaBindableInterface",PythonQtUpcastingOffset<QMediaPlaylist,QMediaBindableInterface>());
PythonQt::priv()->registerClass(&QMediaRecorder::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaRecorder>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaRecorder>, module, 0);
PythonQt::self()->addParentClass("QMediaRecorder", "QMediaBindableInterface",PythonQtUpcastingOffset<QMediaRecorder,QMediaBindableInterface>());
PythonQt::priv()->registerClass(&QMediaRecorderControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaRecorderControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaRecorderControl>, module, 0);
PythonQt::priv()->registerCPPClass("QMediaResource", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaResource>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QMediaService::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaService>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaService>, module, 0);
PythonQt::priv()->registerCPPClass("QMediaServiceCameraInfoInterface", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaServiceCameraInfoInterface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaServiceCameraInfoInterface>, module, 0);
PythonQt::priv()->registerCPPClass("QMediaServiceDefaultDeviceInterface", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaServiceDefaultDeviceInterface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaServiceDefaultDeviceInterface>, module, 0);
PythonQt::priv()->registerCPPClass("QMediaServiceProviderFactoryInterface", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaServiceProviderFactoryInterface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaServiceProviderFactoryInterface>, module, 0);
PythonQt::priv()->registerCPPClass("QMediaServiceProviderHint", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaServiceProviderHint>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QMediaServiceProviderPlugin::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaServiceProviderPlugin>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaServiceProviderPlugin>, module, 0);
PythonQt::priv()->registerCPPClass("QMediaServiceSupportedDevicesInterface", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaServiceSupportedDevicesInterface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaServiceSupportedDevicesInterface>, module, 0);
PythonQt::priv()->registerCPPClass("QMediaServiceSupportedFormatsInterface", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaServiceSupportedFormatsInterface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaServiceSupportedFormatsInterface>, module, 0);
PythonQt::priv()->registerClass(&QMediaStreamsControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaStreamsControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaStreamsControl>, module, 0);
PythonQt::priv()->registerCPPClass("QMediaTimeInterval", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaTimeInterval>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QMediaTimeRange", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaTimeRange>, NULL, module, PythonQt::Type_Add|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceSubtract|PythonQt::Type_NonZero|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);
PythonQt::priv()->registerClass(&QMediaVideoProbeControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaVideoProbeControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaVideoProbeControl>, module, 0);
PythonQt::priv()->registerClass(&QMetaDataReaderControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMetaDataReaderControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMetaDataReaderControl>, module, 0);
PythonQt::priv()->registerClass(&QMetaDataWriterControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMetaDataWriterControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMetaDataWriterControl>, module, 0);
PythonQt::priv()->registerCPPClass("QMultimedia", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMultimedia>, NULL, module, 0);
PythonQt::priv()->registerClass(&QRadioData::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QRadioData>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QRadioData>, module, 0);
PythonQt::self()->addParentClass("QRadioData", "QMediaBindableInterface",PythonQtUpcastingOffset<QRadioData,QMediaBindableInterface>());
PythonQt::priv()->registerClass(&QRadioDataControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QRadioDataControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QRadioDataControl>, module, 0);
PythonQt::priv()->registerClass(&QRadioTuner::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QRadioTuner>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QRadioTuner>, module, 0);
PythonQt::priv()->registerClass(&QRadioTunerControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QRadioTunerControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QRadioTunerControl>, module, 0);
PythonQt::priv()->registerClass(&QSound::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QSound>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSound>, module, 0);
PythonQt::priv()->registerClass(&QSoundEffect::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QSoundEffect>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSoundEffect>, module, 0);
PythonQt::priv()->registerClass(&QVideoDeviceSelectorControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoDeviceSelectorControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVideoDeviceSelectorControl>, module, 0);
PythonQt::priv()->registerCPPClass("QVideoEncoderSettings", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoEncoderSettings>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QVideoEncoderSettingsControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoEncoderSettingsControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVideoEncoderSettingsControl>, module, 0);
PythonQt::priv()->registerCPPClass("QVideoFrame", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoFrame>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QVideoProbe::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoProbe>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVideoProbe>, module, 0);
PythonQt::priv()->registerClass(&QVideoRendererControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoRendererControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVideoRendererControl>, module, 0);
PythonQt::priv()->registerCPPClass("QVideoSurfaceFormat", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoSurfaceFormat>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QVideoWidget::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVideoWidget>, module, 0);
PythonQt::self()->addParentClass("QVideoWidget", "QMediaBindableInterface",PythonQtUpcastingOffset<QVideoWidget,QMediaBindableInterface>());
PythonQt::priv()->registerClass(&QVideoWidgetControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoWidgetControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVideoWidgetControl>, module, 0);
PythonQt::priv()->registerClass(&QVideoWindowControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoWindowControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVideoWindowControl>, module, 0);


PythonQtMethodInfo::addParameterTypeAlias("QList<QAudio::Role>", "QList<int>");
PythonQtMethodInfo::addParameterTypeAlias("QList<QAudioFormat::Endian>", "QList<int>");
PythonQtMethodInfo::addParameterTypeAlias("QList<QAudioFormat::SampleType>", "QList<int>");
PythonQtMethodInfo::addParameterTypeAlias("QList<QVideoFrame::PixelFormat>", "QList<int>");
PythonQtRegisterListTemplateConverterForKnownClass(QList, QAudioDeviceInfo);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QCamera::FrameRateRange);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QCameraFocusZone);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QCameraInfo);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QCameraViewfinderSettings);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QMediaContent);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QMediaResource);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QMediaTimeInterval);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QNetworkConfiguration);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QString);
}
