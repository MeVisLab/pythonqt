#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_multimedia0.h"
#include "com_trolltech_qt_multimedia1.h"



void PythonQt_init_QtMultimedia(PyObject* module) {
PythonQt::priv()->registerCPPClass("QAbstractVideoBuffer", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAbstractVideoBuffer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractVideoBuffer>, module, 0);
PythonQt::priv()->registerClass(&QAbstractVideoSurface::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAbstractVideoSurface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractVideoSurface>, module, 0);
PythonQt::priv()->registerCPPClass("QAudio", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudio>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QAudioBuffer", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioBuffer>, NULL, module, 0);
PythonQt::priv()->registerClass(&QAudioDecoder::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioDecoder>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioDecoder>, module, 0);
PythonQt::priv()->registerCPPClass("QAudioDeviceInfo", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioDeviceInfo>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QAudioEncoderSettings", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioEncoderSettings>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QAudioFormat", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioFormat>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QAudioInput::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioInput>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioInput>, module, 0);
PythonQt::priv()->registerClass(&QAudioOutput::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioOutput>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioOutput>, module, 0);
PythonQt::priv()->registerClass(&QAudioProbe::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioProbe>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioProbe>, module, 0);
PythonQt::priv()->registerClass(&QAudioRecorder::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioRecorder>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioRecorder>, module, 0);
PythonQt::priv()->registerClass(&QCamera::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCamera>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCamera>, module, 0);
PythonQt::priv()->registerClass(&QCameraExposure::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraExposure>, NULL, module, 0);
PythonQt::priv()->registerClass(&QCameraFocus::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraFocus>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QCameraFocusZone", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraFocusZone>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QCameraImageCapture::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraImageCapture>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCameraImageCapture>, module, 0);
PythonQt::self()->addParentClass("QCameraImageCapture", "QMediaBindableInterface",PythonQtUpcastingOffset<QCameraImageCapture,QMediaBindableInterface>());
PythonQt::priv()->registerClass(&QCameraImageProcessing::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraImageProcessing>, NULL, module, 0);
PythonQt::priv()->registerClass(&QCameraViewfinder::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCameraViewfinder>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCameraViewfinder>, module, 0);
PythonQt::priv()->registerClass(&QGraphicsVideoItem::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QGraphicsVideoItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsVideoItem>, module, 0);
PythonQt::self()->addParentClass("QGraphicsVideoItem", "QMediaBindableInterface",PythonQtUpcastingOffset<QGraphicsVideoItem,QMediaBindableInterface>());
PythonQt::priv()->registerCPPClass("QImageEncoderSettings", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QImageEncoderSettings>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QMediaBindableInterface", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaBindableInterface>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaBindableInterface>, module, 0);
PythonQt::priv()->registerCPPClass("QMediaContent", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaContent>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QMediaControl::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaControl>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaControl>, module, 0);
PythonQt::priv()->registerClass(&QMediaObject::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaObject>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaObject>, module, 0);
PythonQt::priv()->registerClass(&QMediaPlayer::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaPlayer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaPlayer>, module, 0);
PythonQt::priv()->registerClass(&QMediaPlaylist::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaPlaylist>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaPlaylist>, module, 0);
PythonQt::self()->addParentClass("QMediaPlaylist", "QMediaBindableInterface",PythonQtUpcastingOffset<QMediaPlaylist,QMediaBindableInterface>());
PythonQt::priv()->registerClass(&QMediaRecorder::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaRecorder>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaRecorder>, module, 0);
PythonQt::self()->addParentClass("QMediaRecorder", "QMediaBindableInterface",PythonQtUpcastingOffset<QMediaRecorder,QMediaBindableInterface>());
PythonQt::priv()->registerCPPClass("QMediaResource", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaResource>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QMediaService::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaService>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaService>, module, 0);
PythonQt::priv()->registerCPPClass("QMediaTimeInterval", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaTimeInterval>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QMediaTimeRange", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaTimeRange>, NULL, module, PythonQt::Type_Add|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceSubtract|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);
PythonQt::priv()->registerCPPClass("QMultimedia", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMultimedia>, NULL, module, 0);
PythonQt::priv()->registerClass(&QRadioData::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QRadioData>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QRadioData>, module, 0);
PythonQt::self()->addParentClass("QRadioData", "QMediaBindableInterface",PythonQtUpcastingOffset<QRadioData,QMediaBindableInterface>());
PythonQt::priv()->registerClass(&QRadioTuner::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QRadioTuner>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QRadioTuner>, module, 0);
PythonQt::priv()->registerClass(&QSoundEffect::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QSoundEffect>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSoundEffect>, module, 0);
PythonQt::priv()->registerCPPClass("QVideoEncoderSettings", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoEncoderSettings>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QVideoFrame", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoFrame>, NULL, module, 0);
PythonQt::priv()->registerClass(&QVideoProbe::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoProbe>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVideoProbe>, module, 0);
PythonQt::priv()->registerCPPClass("QVideoSurfaceFormat", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoSurfaceFormat>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QVideoWidget::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVideoWidget>, module, 0);
PythonQt::self()->addParentClass("QVideoWidget", "QMediaBindableInterface",PythonQtUpcastingOffset<QVideoWidget,QMediaBindableInterface>());


PythonQtMethodInfo::addParameterTypeAlias("QList<QAudioFormat::Endian>", "QList<int>");
PythonQtMethodInfo::addParameterTypeAlias("QList<QAudioFormat::SampleType>", "QList<int>");
PythonQtMethodInfo::addParameterTypeAlias("QList<QVideoFrame::PixelFormat>", "QList<int>");
PythonQtRegisterListTemplateConverterForKnownClass(QList, QAudioDeviceInfo);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QCameraFocusZone);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QMediaContent);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QMediaResource);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QMediaTimeInterval);
PythonQtRegisterListTemplateConverterForKnownClass(QList, QNetworkConfiguration);
}
