#ifndef INPUTCONTEXTEMBEDDED_H_TVQEKXFO
#define INPUTCONTEXTEMBEDDED_H_TVQEKXFO

#include "InputContext.h"
#include <QQuickView>

class QDeclarativeComponent;

class InputContextEmbedded: public InputContext
{
Q_OBJECT
public:
	InputContextEmbedded();
	~InputContextEmbedded();

	QRectF keyboardRect() const;
	void showInputPanel();
	void hideInputPanel();

private slots:
	void embedKeyboard();

private:
	QQmlComponent *m_component;
	QPointer<QQuickView> m_focusWindow;
}; /* -----  end of class InputContextEmbedded  ----- */

#endif /* end of include guard: INPUTCONTEXTEMBEDDED_H_TVQEKXFO */
